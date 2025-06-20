#include <iostream>
#include <string>

using namespace std;

int main() {
  bool isPal = true;
  
  string num;
  int s;
  while(true) {
    isPal = true;

    cin >> num;
    if(num[0] == '0') break;
    if(num.length() == 1) {
      cout << "yes\n";
      continue;
    }

    for(int i=0; i<num.length()-1/2; i++) {
      if(num[i] != num[num.length()-1-i]) isPal = false;
    }

    if(isPal == true) cout << "yes\n";
    else cout << "no\n";
  }

  return 0;
}