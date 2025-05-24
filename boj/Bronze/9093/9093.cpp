#include <iostream>
#include <string>
#include <stack>
// #include <cctype>

using namespace std;

int main()
{
  int T;
  cin >> T;

  stack<char> st;

  getchar();

  for(int i=0; i<T; i++) {
    
    string str;
    getline(cin, str, '\n');
    
    for(int j=0; str[j]!='\0'; j++) {
      if(isspace(str[j])) {
        while(!st.empty())
        {
          cout << st.top();
          st.pop();
        }
        cout << str[j];
      } else {
        st.push(str[j]);
      }
    }
    while(!st.empty())
    {
      cout << st.top();
      st.pop();
    }
    cout << endl;
  }

      cout << endl;

  return 0;
}