#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n; // number of cases

  int r, e, c;

  int i=0;
  while(i < n) {
    cin >> r >> e >> c;
    if(r > e-c) cout << "do not advertise" << endl;
    else if(r == e-c) cout << "does not matter" << endl;
    else if(r < e-c) cout << "advertise" << endl;

    i++;
  }


  return 0;
}