#include <iostream>

using namespace std;

int main() {
  int num1, num2;
  cin >> num1 >> num2;

  if(num1 == num2) {
    cout << num1 << "\n" << num2;
    return 0;
  }

  int small, big;
  if(num1 < num2) {
    small = num1;
    big = num2;
  } else {
    small = num2;
    big = num1;
  }

  int temp;
  for(int i = 1; i<=small; i++) {
    if(small%i != 0) {
      continue;
    }
    temp = small/i;
    if(big % temp == 0) {
      cout << temp << "\n";
      break;
    }


    //if(big % i == 0) {
    //  cout << i << "\n";
    //  break;
    //}
  }

  // 변수 i, j 두고 ++ 하면서 반복
  int i=1, j=1;
  int mul_small, mul_big;
  mul_small = small*i;
  mul_big= big*j;
  while(mul_small < mul_big) {
    mul_small = small*(++i);
    if(mul_small == mul_big) {
      cout << mul_small << "\n";
      break;
    } else if (mul_small > mul_big) {
      mul_big = big*(++j);
    }
  }

}