#include <iostream>

using namespace std;

int main()
{
  int hr, min;
  int cookTime;
  cin >> hr >> min;
  cin >> cookTime;

  min += cookTime;
  int addHr = min/60;
  min %= 60;
  
  hr += addHr;
  hr %= 24;

  cout << hr << " " << min << endl;

  return 0;
}