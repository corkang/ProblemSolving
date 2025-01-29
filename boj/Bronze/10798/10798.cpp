#include <iostream>
#include <string>

using namespace std;

int main() {
  string strArr[5];
  int longestLen=1;

  string str;
  for(int i=0; i<5; i++) {
    cin >> str;
    strArr[i] = str;
  }

  for(int i=0; i<15; i++) {
    for(int j=0; j<5; j++) {
      if(strArr[j].length()-1 < i) continue;
      // was -> if(strArr[j].length() < i) continue;

      cout << strArr[j][i];
    }
  }
  
  cout << endl;

  return 0;
}