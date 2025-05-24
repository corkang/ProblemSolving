#include <iostream>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  int basket[100] = {0};
  for(int n=0; n<N; n++) {
    basket[n] = n+1;
  }

  int i, j;
  int temp;
  for(int m=0; m<M; m++) {
    cin >> i >> j;
    i-=1; j-=1;
    temp = basket[i];
    basket[i] = basket[j];
    basket[j] = temp;
  }

  for(int n=0; n<N; n++) {
    cout << basket[n] << " ";
  }
  cout << endl;

  return 0;
}