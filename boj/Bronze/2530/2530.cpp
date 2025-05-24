#include <iostream>

using namespace std;

int main()
{
  int h, m, s;
  int secondNeeded;

  cin >> h >> m >> s;
  cin >> secondNeeded;
  s += secondNeeded;

  m += s/60;
  s = s%60;

  h += m/60;
  m = m%60;

  if(h >= 24) h-=24;

  cout << h << " " << m << " " << s << endl;

  return 0;
}