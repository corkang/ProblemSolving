#include <iostream>

using namespace std;

int main() {
  string str;

  do {
    getline(cin, str);
    if(str == "") break;
    cout << str << endl;
  } while (str != "");

  return 0;
}