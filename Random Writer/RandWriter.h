#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <map>

class RandWriter {
 public:
RandWriter(std::string text, int k);
int order() const;
int freq(std::string kgram);
int freq(std::string kgram, char c);
char randk(std::string kgram);
std::string generate(std::string kgram, int T);
friend std::ostream& operator<<(std::ostream& os, RandWriter& mm);
 private:
std::map <std::string, int> kgrams;
int inLine;
std::string word;
std::string init;
};