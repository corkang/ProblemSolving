#include <iostream>
#include <vector>

using namespace std;

int main() {
  int T;
  cin >> T;
  
  vector<int> sosu(10001, 0);
  for(int i=1; i<10001; i++) {
    sosu[i] = i;
  }

  for(int i=2; i<100; i++) {
    for(int j=i*2; j<10001; j+=i) {
      if(j%i == 0) {
        sosu[j] = 0;
      }
    }
  }

  int n;
  int nDownward;
  for(int i=0; i<T; i++) {
    cin >> n;
    nDownward = n/2;
    for(int j=0; nDownward-j>=0; j++) {
      if(sosu[nDownward-j] != 0 && sosu[nDownward-j]+sosu[nDownward+j] == n) {
        cout << nDownward-j << " " << nDownward+j << "\n";
        break;
      }
    }
  }

  return 0;
}