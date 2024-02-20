  // Copyright [2022] <Dev Patel>
#include "EDistance.h"
ED::ED(std::string _s1, std::string _s2) {
  s1 = _s1;
  s2 = _s2;
}

int ED::penalty(char a, char b) {
    if (a == b) {
    return 0;
  } else if (a != b) {
    return 1;
  }
  return -1;
}

int ED::min(int a, int b, int c) {
    if (a < b && a < c) {
    return a;
  } else if (b < a && b < c) {
    return b;
  } else if (c < a && c < b) {
    return c;
  }
  return a;
}

int ED::OptDistance() {
for(int i = 0; (unsigned)i <= s2.size(); i++) {
    std::vector<int> temp;
    _M.push_back(temp);

    for (int k = 0;  (unsigned)k <= s1.size(); k++) {
        _M.at(i).push_back(0);  // push 0's to fill vector
    }
}
for(int i = 0; (unsigned)i <=  s2.size(); i++) {  // bottom row
    _M[i][s1.size()] = 2 * (s2.size() - i);
}
for(int k = 0; (unsigned)k <=  s1.size(); k++) {  // side row
    _M[s2.size()][k] = 2 * (s1.size() - k);
}
for(int i = s2.size() - 1; i >= 0; i--) {
    for (int k = s1.size() - 1; k >= 0; k--) {
        int o1 = _M[i+1][k+1] + penalty(s1[k], s2[i]);
        int o2 = _M[i+1][k] + 2;
        int o3 = _M[i][k+1] + 2;

         _M[i][k] = min(o1, o2, o3);
    }
}
return _M[0][0];
}

std::string ED::Alignment() {
  std::ostringstream return_string;
  int M = s2.length();
  int N = s1.length();
  int i = 0, j = 0;
  int pen, opt1, opt2, opt3;
  std::string retS;
  while (i < M || j < N) {  // run until we hit the far bottom right
    try {
      pen =  penalty(s1[j], s2[i]);
      opt1 = _M.at(i+1).at(j+1) + pen;
    }
    catch(const std::out_of_range& error) {
      opt1 = -1;
    }
    try {
      opt2 = _M.at(i+1).at(j) + 2;
    }catch(const std::out_of_range& error) {
      opt2 = -1;
    }
    try {
      opt3 = _M.at(i).at(j+1) + 2;
    }catch(const std::out_of_range& error) {
      opt3 = -1;
    }
    // Move diagonally
    if (_M[i][j] == opt1) {
      return_string << s1[j] << " " <<  s2[i] << " "  << pen << "\n";
      i++;
      j++;
    } else if (_M[i][j] == opt2) {  // down
      return_string << "- " << s2[i] << " 2\n";
      i++;
    } else if (_M[i][j] == opt3) {  // Move right
      return_string << s1[j] << " -" << " 2\n";
      j++;
    }
  }
  retS = return_string.str();
  return retS;
}
