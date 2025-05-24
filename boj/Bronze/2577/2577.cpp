#include <iostream>

using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  long long int num = a*b*c;

  int numList[10] = {0};

  while(num > 10)
  {
    numList[num%10] ++;
    num /= 10;
  }
  numList[num]++;

  for(int i=0; i<10; i++)
  {
    cout << numList[i] << endl;
  }

  return 0;
}