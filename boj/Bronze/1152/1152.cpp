#include <iostream>
#include <cctype>

using namespace std;

int main() {
  string str;
  getline(cin, str);
  cout << str << endl;
  
  int bCount = 0;
  for(int s=0; s<str.length(); s++) {
    if(bCount == 0 && isalpha(str[s])) {
      bCount++;
      cout << "case1: " << str[s] << endl;
    }
    if(!isalpha(str[s]) && isalpha(str[s+1])) {
      bCount ++;
      cout << "case2: " << str[s+1] << endl;
    }
  }

  cout << bCount << endl;

  return 0;
}