#include <iostream>

using namespace std;

int main()
{
  int A, I;
  int minScientistsNum=0;

  cin >> A >> I;
  minScientistsNum = (I-1)*A + 1;
  cout << minScientistsNum << endl;

  return 0;
}