#include <iostream>

using namespace std;

int main()
{
  int totalRounds;
  cin >> totalRounds;
  
  int pointsA = 100;
  int pointsD = 100;
  int diceA, diceD;

  for(int i=0; i<totalRounds; i++)
  {
    cin >> diceA >> diceD;
    if(diceA == diceD) continue;
    else if(diceA > diceD) pointsD -= diceA;
    else if(diceD > diceA) pointsA -= diceD;
  }

  cout << pointsA << "\n" << pointsD << endl;
}