#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  int T; //조리시간
  cin >> T;

  int A=0, B=0, C=0; // 버튼. 각각 300, 60, 10초
  
  if(T%10 != 0) {
    cout << -1 << endl;
    return 0;
  }

  while(T > 9) 
  {
    if(T >= 300) {
      T -= 300;
      A++;
    } else if (T >= 60) {
      T -= 60;
      B++;
    } else if (T >= 10) {
      T -= 10;
      C++;
    }
  }

  printf("%d %d %d\n", A, B, C);

  return 0;
}