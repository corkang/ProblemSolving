#include <stdio.h>

int main() {
  // 첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다.
  // 둘째 줄에는 정수가 공백으로 구분되어져있다. 
  // 셋째 줄에는 찾으려고 하는 정수 v가 주어진다. 
  // 입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.

  // 입력되는 정수 몇갠지 확인
  int N;
  scanf("%d", &N);

  // N개만큼 정수 입력받기
  int numbers[200];
  for(int i=0; i<N; i++) {
    scanf("%d", &numbers[i]);
  }

  // 찾으려고 하는 정수 v 입력받기
  int v;
  scanf("%d", &v);

  // v 몇갠지 찾기
  int count = 0;
  for(int i=0; i<N; i++) {
    if(numbers[i] == v) count++;
  }

  printf("%d\n", count);

  return 0;
}