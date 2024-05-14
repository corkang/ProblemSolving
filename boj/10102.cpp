#include <iostream>

using namespace std;

int main()
{
  int votesNum;
  cin >> votesNum;

  char votes[16];
  cin >> votes;

  int a=0, b=0;

  int i=0;
  while(i < votesNum) {
    if(votes[i] == 'A') {
      a++;
    } else if(votes[i] == 'B') {
      b++;
    }
    i++;
  }

  if(a > b) cout << "A" << endl;
  else if(a == b) cout << "Tie" << endl; 
  else cout << "B" << endl;

  return 0;
}