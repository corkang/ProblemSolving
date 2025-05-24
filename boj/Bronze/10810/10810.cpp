#include <iostream>

using namespace std;

int main() {
  int N, M; int num[100] = {0};
  cin >> N >> M;

  int i, j, k;
  for(int m=0; m<M; m++) {
    cin >> i >> j >> k;
    for(int y=i; y<j+1; y++) {
      num[y-1] = k;
    }
  }

  for(int n=0; n<N; n++) {
    cout << num[n] << " ";
  }

  cout << endl;


  return 0;
}