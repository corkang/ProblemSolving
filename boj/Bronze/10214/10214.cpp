#include <iostream>

using namespace std;

int main()
{
  int T;
  cin >> T;
  int Y, K;

  int caseNum = 0;
  while(caseNum < T)
  { 
    Y=0;
    K=0;
    int innings = 0;
    int y, k;
    
    while(innings < 9){
      cin >> y >> k;
      Y += y;
      K += k;
      innings++;
    }

    if(Y > K) cout << "Yonsei" << endl;
    else if(K > Y) cout << "Korea" << endl;
    else cout << "Draw" << endl;

    caseNum++;
  }

  return 0;
}