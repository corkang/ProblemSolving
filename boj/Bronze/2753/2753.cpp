#include <iostream>

using namespace std;

int main()
{
  int year;
  cin >> year;

  int isYoon = 0;
  if(year % 4 == 0) {
    if(year % 400 == 0) isYoon = 1;
    else if(year % 100 != 0) isYoon = 1;
  }

  cout << isYoon << endl;

  return 0;
}