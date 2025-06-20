#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  a = b = c = 1;
  int max, n1, n2;
  while(a!=0 && b!=0 && c!=0) {
    cin >> a >> b >> c;
    if(a == 0 || b == 0 || c == 0) return 0;
    if(a >= b && a >= c) {
      max = a;
      n1 = b;
      n2 = c;
    } else if(b >= a && b >= c) {
      max = b;
      n1 = a; n2 = c;
    } else if (c >= a && c >= b) {
      max = c;
      n1 = a; n2 = b;
    }

    if(max*max == (n1*n1 + n2*n2)) {
      cout << "right\n";
    } else {
      cout << "wrong\n";
    }
  }

  return 0;
}