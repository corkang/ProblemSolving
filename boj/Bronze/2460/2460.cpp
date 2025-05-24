#include <iostream>

using namespace std;

int main()
{
  int getIn, getOff;
  int currentPeople=0;
  int maxPeople=0;

  for(int i=0; i<10; i++)
  {
    cin >> getOff >> getIn;
    currentPeople = currentPeople + getIn - getOff;

    if(currentPeople > maxPeople) maxPeople = currentPeople;
  }

  cout << maxPeople << endl;

  return 0;
}