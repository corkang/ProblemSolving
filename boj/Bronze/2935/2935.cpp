#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
  char A[101] = {};
  char B[101] = {};
  char ans[101] = {};
  char operationType;

  cin >> A >> operationType >> B;

  int Alen = strlen(A);  // 길이
  int Blen = strlen(B);

  int longer, shorter;
  longer = (Alen>=Blen)? Alen: Blen;
  shorter = (Alen<=Blen)? Alen: Blen;

  if(Alen > Blen) memcpy(ans, A, longer);
  else memcpy(ans, B, longer);
  // int i;
  // for(i=0; i < longer; i++){
  //   if(i==0) ans[i] = '1';
  //   else ans[i] = '0';
  // }
  // ans[longer] = '\0';

  if(operationType == '+')
  {
    if(longer == shorter) ans[0] = '2';
    else ans[longer-shorter] = '1';
  }

  if(operationType == '*')
  {
    for(int i=1; i<shorter; i++){
      ans[longer] = '0';
      ans[longer+1] = '\0';
      longer++;
    }
  }

  cout << ans << endl;

  return 0;
}