#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  
  for(int i=2; N!=1; i++) {
    if(N%i == 0) {
      N /= i;
      cout << i << "\n";
      i--;
    }
  }

  return 0;
}