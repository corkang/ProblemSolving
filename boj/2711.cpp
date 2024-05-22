#include <iostream>
#include <string>

using namespace std;

int main()
{
  int caseNum;
  cin >> caseNum;

  int doNotPrint;
  string str;
  
  int i=0;
  while(i<caseNum)
  {
    cin >> doNotPrint >> str;

    int j=0;
    while(j < str.length())
    {
      if(j != doNotPrint-1) cout << str[j];
      j++;
    }
    
    cout << endl;

    i++;
  }

  return 0;
}