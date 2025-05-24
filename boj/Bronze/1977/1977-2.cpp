#include <iostream>

using namespace std;

int main() {
  int M; int N; // M보다 N이 큼
  cin >> M >> N;

  int mul;
  int sum=0;
  int min=-1;

  for(int i=1; i==1 || i<N; i++) {
    mul = i*i;
    if(mul < M) continue;
    if(mul > N) break;
    if(M <= mul && mul <= N) {
      if(min == -1) min = mul;
      sum += mul;
    }
  }

  if(sum == 0) {
    cout << min << endl;
  } else {
    cout << sum << "\n" << min << endl;
  }

  return 0;
}