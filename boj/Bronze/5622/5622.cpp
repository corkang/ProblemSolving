#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string strs[] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
  string str;
  cin >> str;

  int result=0;
  
  for(int i=0; i<str.length(); i++) {
    for(int j=0; j<8; j++) {
      // cout << strs[j].find(str[i]) << endl;
      if(strs[j].find(str[i]) != string::npos) {
        result += j+3;
      }
    }
  }

  cout << result << endl;

  return 0;
}