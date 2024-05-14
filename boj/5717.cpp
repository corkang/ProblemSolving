#include <iostream>

using namespace std;

int main()
{
  int L=1, R=1;

  while(1)
  {
    cin >> L >> R;
    if(L==0 && R==0) return 0;
    cout << L+R << endl;
  }

  return 0;
}