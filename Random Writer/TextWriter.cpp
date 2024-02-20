//  Copyright [2022] <Dev Patel>
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include "RandWriter.h"

int main(int argc, const char* argv[]) {
  if (argc != 3) {
    std::cout << "To Use ./TextWriter (K) (L) //  L ≥ k\n";
    return 0;
  }
  std::string str_k(argv[1]);
  std::string str_t(argv[2]);

  int k = std::stoi(str_k);
  int t = std::stoi(str_t);

  std::string input = "NULL";
  std::string current_txt = "NULL";

  while (std::cin >> current_txt) {
    input += " " + current_txt;
    current_txt = "";
  }
  std::cout << "Original Text:\n\n";
  for (int a = 0; a < t; a++) {
    std::cout << input[a];
    if (input[a] == '.' || input[a] == '!') {
      std::cout << "\n";
    }
  }
  std::string output_string = "";
  RandWriter whatWord(input, k);
  output_string += "" + whatWord.generate(input.substr(0, k), t);
  std::cout << "\n\nAfter Code:\n\n";
  for (int a = 0; a < t; a++) {
    std::cout << output_string[a];
    if (output_string[a] == '.' || output_string[a] == '!') {
      std::cout << "\n";
    }
  }
  std::cout << "\n";
  return 0;
}
