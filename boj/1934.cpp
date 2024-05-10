#include <iostream>

using namespace std;
int findAns(int biggerNum, int smallerNum);

int main()
{
  int T;
  cin >> T;

  int caseNum = 0;
  while(caseNum < T)
  {
    int A, B;
    cin >> A >> B;

    if(A>B) cout << findAns(A, B) << endl;
    else cout << findAns(B,A) << endl;

    caseNum++;
  }

  return 0;
}

int findAns(int biggerNum, int smallerNum)
{
  int i=1;
  while(1){
    int ans = biggerNum * i;
    if(ans % smallerNum == 0) 
      return ans;
    i++;
  }

  return 0;
}