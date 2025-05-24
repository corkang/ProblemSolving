#include <iostream>

using namespace std;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  int num[3] ={A, B, C};
  int swp;

  while(!(num[0]<=num[1] && num[1] <= num[2]))
  {
    if(num[0]>=num[1])
    {
      swp = num[1];
      num[1] = num[0];
      num[0] = swp;
    }
    if(num[1]>=num[2])
    {
      swp = num[2];
      num[2] = num[1];
      num[1] = swp;
    }
  }
  cout << num[1] << endl;
}