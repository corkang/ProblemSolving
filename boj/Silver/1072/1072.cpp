#include <iostream>
#include <string>

using namespace std;

int main()
{
  int x, y, z;
  cin >> x >> y;
  z = y/x*100;

  int temp_z=z;
  int p=0;
  while(temp_z == z) {
    temp_z = (y+p)/(x+p)*100;
    p++;
  }

  temp_z = z;
  int n=0;
  while(temp_z == z) {
    temp_z = (y)/(x+n)*100;
    n++;
  }

  cout << (p<=n)? p: n << endl;

  return 0;
}
