#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n; // number of cases
  cin >> n;

  int p;
  long long int price;
  long long int mostExpensivePrice;
  string playerName;
  string mostExpensivePlayerName;

  int i=0;
  while(i<n)
  {
    cin >> p;
    mostExpensivePrice = 0;

    int j=0;
    while(j<p)
    {
      cin >> price >> playerName;

      if(price > mostExpensivePrice) {
        mostExpensivePlayerName.assign(playerName);
        mostExpensivePrice = price;
      }
      // cout << price << " " << mostExpensivePrice << endl;
      j++;
    }

    cout << mostExpensivePlayerName << endl;

    i++;
  }


  return 0;
}