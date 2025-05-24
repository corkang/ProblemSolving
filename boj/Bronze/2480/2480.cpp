#include <iostream>

using namespace std;

int main()
{
  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;

  int prize;
  if(n1 == n2 && n1 == n3) {
    prize = 10000 + n1 * 1000;
  } else if(n1 == n2 || n1 == n3) {
    prize = 1000 + n1 * 100;
  } else if(n2 == n3) {
    prize = 1000 + n2 * 100;
  } else {
    int max=n1;
    if(n2 > max) max = n2;
    if(n3 > max) max = n3;

    prize = max*100;
  }

  cout << prize << endl;

  return 0;
}