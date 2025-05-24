#include <iostream>

using namespace std;

int main()
{
  int N = 0; // 더한 숫자 개수
  long long S;
  cin >> S;


  int i=1;
  while(i <= S){
    S -= i;
    i++;
    N++;
  }

  cout << N << endl;

  return 0;
}