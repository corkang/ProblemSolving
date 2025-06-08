#include <iostream>

using namespace std;

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  
  int sosu[1000001];
  for(int i=3; i<1000001; i+=2) {
    sosu[i] = i;
  }

  for(int i=3; i<1001; i+=2) {
    if(sosu[i] == 0) continue;
    for(int j=i*3; j<1000001; j+=2*i) {
      if(j%i == 0) {
        sosu[j] = 0;
      }
    }
  }

  int n=1;
  while(n!=0) {
    cin >> n;
    if(n == 0) break;

    int j;
    for(j=3; j<=n/2; j+=2) {
      if(sosu[j] != 0 && j + sosu[n-j] == n) {
        cout << n << " = " << j << " + " << sosu[n-j] << "\n";
        break;
      }
    }
    if(j == n/2+1) cout << "Goldbach's conjecture is wrong." << "\n";
  }

  return 0;
}