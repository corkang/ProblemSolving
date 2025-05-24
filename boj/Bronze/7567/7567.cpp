#include <iostream>

using namespace std;

int main()
{
  char bowls[51];
  cin >> bowls;
  int height=0;

  int i=0;
  while(bowls[i]!='\0')
  {
    if(i==0)
    {
      height += 10;
    }
    else if(bowls[i] == bowls[i-1])
    {
      height += 5;
    }
    else
    {
      height += 10;
    }
    i++;
  }

  cout << height << endl;
}