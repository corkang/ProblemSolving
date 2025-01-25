#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  string str;
  for(int t=0; t<T; t++) {
    cin >> str;
    cout << str[0] << str[str.length()-1] << "\n";
  }

  return 0;
}