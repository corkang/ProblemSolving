#include <iostream>

using namespace std;

int main()
{
  int hr, min;
  cin >> hr >> min;

  min -= 45;
  if(min < 0) {
    hr -= 1;
    min += 60;
  }
  if(hr < 0) {
    hr += 24;
  }

  cout << hr << " " << min << endl;

  return 0;
}