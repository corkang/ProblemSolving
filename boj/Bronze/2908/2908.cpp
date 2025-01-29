#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  string num1, num2;
  cin >> num1 >> num2;
  reverse(num1.begin(), num1.end());
  reverse(num2.begin(), num2.end());

  for(int i=0; i<num1.length(); i++) {
    if(int(num1[i]) < int(num2[i])) {
      cout << num2 << endl;
      break;
    } else if(int(num1[i]) > int(num2[i])){
      cout << num1 << endl;
      break;
    }
  }

  return 0;
}