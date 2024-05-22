#include <iostream>

using namespace std;

int main()
{
  // 입력받은 수 n
  // n이 1 이하이면 +1
  // n이 1+2 이하이면 +2
  // n이 1+2+3 이하이면 +3

  int count_start;
  int count_end;
  cin >> count_start >> count_end;

  int count = 1;
  int sum_btw = 0;

  for(int i=1; count <= count_end; i++)
  {
    for(int j=1; j<=i && count <= count_end; j++)
    {
      if(count_start <= count && count <= count_end) {
        sum_btw += i;
      }
      count++; 
    }
  }

  cout << sum_btw << endl;

  return 0;
}