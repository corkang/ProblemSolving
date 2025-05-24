#include <iostream>
#include <string>

using namespace std;

int main()
{
  int num_case;
  cin >> num_case;

  char temp;
  string li;
  string ans;

  int i=0;
  cin.ignore();
  
  while(i<num_case)
  {
    getline(cin, li);

    int n=0;

    for(int i=0; i<li.length() && n>=0; i++) {
      if(li[i] == '(') n++;
      else if(li[i] == ')') n--;
    }

    if(n==0) ans = "YES";
    else {
      ans = "NO";
      // cout << a << " " << b << endl;
    }

    cout << ans << endl;

    i++;
  }

  return 0;
}