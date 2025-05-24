#include <iostream>

using namespace std;

bool isInModulo(int n, int dv, int* modulo);

int main() {
  int n; int modulo[10] = {-1};
  int dv=0;

  // 1. input 10개 입력받고 modulo 연산
  // 2. modulo 연산 결과가 modulo 배열에 있는지 확인
  //   2-1. 있다면 다음 input으로 건너가기
  //   2-2. 없다면 modulo 배열에 추가

  for(int i=0; i<10; i++) {
    cin >> n;
    n %= 42;
    
    if(isInModulo(n, dv, modulo)) continue;
    else modulo[dv++] = n;
  }

  cout << dv << endl;

  return 0;
}

bool isInModulo(int n, int dv, int* modulo) {
  for(int i=0; i<dv; i++) {
    if(modulo[i] == n) return true;
  }
  return false;
}