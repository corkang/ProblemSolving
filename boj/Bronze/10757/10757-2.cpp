#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  string a, b;
  cin >> a >> b;

  int alen = a.length();
  int blen = b.length();

  // 길이 맞추기
  if(alen!=blen) {
    if(alen < blen) swap(a, b);
    alen = a.length();
    blen = b.length();

    b = string(alen-blen, '0') + b;
  }

  string ans;
  int i=alen-1;
  int n=0, c=0;
  while(i > -1) {
    n = a[i]-'0' + b[i]-'0' +c;
    if(n>=10) {
      c=1;
      n -=10;
    } else c=0;

    ans += n+'0';
    i--;
  }

  if(c == 1) ans += '1';
  reverse(ans.begin(), ans.end());

  cout << ans << endl;

  return 0;
}