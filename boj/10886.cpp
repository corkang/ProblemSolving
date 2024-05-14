#include <iostream>

using namespace std;

int main()
{
  int votesNum;
  cin >> votesNum;

  int vote;
  int cute=0;
  int notCute=0;

  int i=0;
  while(i<votesNum) 
  {
    cin >> vote;
    if(vote) cute++;
    else notCute++;

    i++;
  }

  if(cute > notCute) cout << "Junhee is cute!" << endl;
  else cout << "Junhee is not cute!" << endl;

  return 0;
}