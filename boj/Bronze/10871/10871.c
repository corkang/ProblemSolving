#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);

  int X;
  scanf("%d", &X);

  int t;
  for(int i=0; i<N; i++) {
    scanf("%d", &t);
    if(t<X) printf("%d ", t);
  }

  return 0;
}