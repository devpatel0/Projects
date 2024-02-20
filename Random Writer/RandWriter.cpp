// Copyright [2022] <Dev Patel>

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include "RandWriter.h"



RandWriter::RandWriter(std::string text, int k) {
  srand(time(NULL));
  inLine = k;
  init = text;
  for (unsigned i = 0; i < text.size(); i++)
    if (std::string::npos == word.find(text[i]))
      word.push_back(text[i]);
  for (unsigned i = 0; i < text.size(); i++) {
    std::string temp;
    std::string temp2;
    for (unsigned j = i; j < i + k; j++)
      if (j >= text.size())
        temp.push_back(text[j - text.size()]);
      else
        temp.push_back(text[j]);
    if (kgrams.end() == kgrams.find(temp))
      kgrams[temp] = 1;
    else
      kgrams[temp] += 1;
    for (unsigned j = 0; j < word.size(); j++)
      if (kgrams.end() == kgrams.find(temp + word[j]))
        kgrams[temp + word[j]] = 0;
    for (unsigned j = i; j < i + k + 1; j++)
      if (j >= text.size())
        temp2.push_back(text[j - text.size()]);
      else
        temp2.push_back(text[j]);
    kgrams[temp2] += 1;
  }
}

int RandWriter::order() const {
  return inLine;
}

int RandWriter::freq(std::string kgram) {
  if (kgram.size() != (unsigned)inLine)
    throw std::runtime_error("kgram is not size k");

  if (inLine == 0)
    return init.size();
  else
    return kgrams[kgram];
}

int RandWriter::freq(std::string kgram, char c) {
  if (kgram.size() != (unsigned)inLine)
    throw std::runtime_error("kgram is not size k");

  if (inLine == 0) {
    int count = 0;
    for (unsigned i = 0; i < init.size(); i++)
      if (init[i] == c)
        count++;
    return count;
  } else {
    return kgrams[kgram + c];
  }

  return 0;
}

char RandWriter::randk(std::string kgram) {
if (kgram.length() != (unsigned)inLine) {
    throw std::runtime_error("Error - kgram not of length k (randk)");
  }
  std::map<std::string, int>::iterator it;
  it = kgrams.find(kgram);
  if (it == kgrams.end()) {
    throw std::runtime_error("Error - Could not find the given kgram! (randk)");
  }
  int kgram_freq = freq(kgram);
  int random_value = rand() % kgram_freq; //NOLINT
  double test_freq = 0;
  double random_num = static_cast<double>(random_value) / kgram_freq;
  double last_values = 0;
  for (unsigned int a = 0; a < word.length(); a++) {
    test_freq =  static_cast<double>(freq(kgram, word[a])) / kgram_freq;
    if (random_num < test_freq + last_values && test_freq != 0) {
      return word[a];
    }
    last_values += test_freq;
  }
  return '-';
}

std::string RandWriter::generate(std::string kgram, int L) {
  std::string s1 = kgram;
  std::string s2 = kgram;
  char rc;

  for (int i = 0; i < L - inLine; i++) {
    rc = randk(s1);
    s2.push_back(rc);
    s1.erase(s1.begin());
    s1.push_back(rc);
  }

  return s2;
}

std::ostream& operator<<(std::ostream& os, RandWriter& mm) {
  std::map <std::string, int> temp = mm.kgrams;
  // cppcheck-suppress StlMissingComparison
  for (std::map<std::string, int>::iterator it = temp.begin(); it != temp.end(); ++it) {
    os << it->first << " " << it->second << " => ";
    for (unsigned i = 0; i < mm.word.size(); i++) {
      it++;
      os << it->first << " " << it->second << " ";
    }

    os << std::endl;
  }
  return os;
}
