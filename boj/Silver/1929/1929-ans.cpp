#include <iostream>
#include <vector>

using namespace std;

int main() {
  int M, N;
  cin >> M >> N;

  vector<int> sosu(N+1, 0);
  for(int i=2; i<=N; i++) {
    sosu[i] = i;
  }

  for(int i=2; i*i <= N; i++) {
    if(sosu[i]==0) continue;
    for(int j=i*2; j<=N; j+=i) {
      sosu[j] = 0;
    }
  }

  for(int i=M; i<=N; i++) {
    if(sosu[i] != 0) cout << sosu[i] << "\n";
  }


  return 0;
}