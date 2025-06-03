#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M;
  scanf("%d %d", &N, &M);

  vector<int> sosu(M+1, 0);

  int s = M+1;
  for(int i=2; i<=M; i++) {
    sosu[i] = i;
  }

  int sosui;
  for(int i=2; i<=M; i++) {
    sosui = sosu[i];
    if(sosui == 0) continue;
    for(int j=i+1; j<s; j++) {
      if(sosu[j]==0) continue;
      if(sosu[j]%sosui == 0) sosu[j] = 0;
    }
  }

  for(int i=N; i<=M; i++) {
    if(sosu[i] == 0) continue;
    printf("%d\n", sosu[i]);
  }
  
  return 0;
}