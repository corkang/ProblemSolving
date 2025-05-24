#include <iostream>
using namespace std;

int main() {
  int N, M;
  int basket[100] = {0};
  int tempBasket[100] = {0};

  cin >> N >> M;
  for(int n=0; n<N; n++) {
    basket[n] = n+1;
  }

  int i, j; int count;
  for(int m=0; m<M; m++) {
    cin >> i >> j;
    count = j-i+1;
    for(int c=0; c<count; c++) {
      tempBasket[c] = basket[j-c-1];
    }
    for(int c=0; c<count; c++) {
      basket[i-1+c] = tempBasket[c];
    }
  }

  for(int n=0; n<N; n++) {
    cout << basket[n] << " ";
  }
  cout << endl;

  return 0;
}