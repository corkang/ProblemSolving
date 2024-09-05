#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  cin >> str;

  int totalLetters = 26;

  int lttrs[26] = {0,};
  for(int i=0; i<str.length(); i++) {
    int lttr = (str[i]-'A')>totalLetters ? str[i]-'a' : str[i]-'A';
    lttrs[lttr]++;
  }

  int max_index=0;
  for(int i=0; i<totalLetters; i++) {
    if(lttrs[i] > lttrs[max_index]) max_index = i;
  }

  int max_count = 0;
  int max_num = lttrs[max_index];
  for(int i=0; i<totalLetters; i++) {
    if(lttrs[i] == max_num) max_count++;
    if(max_count > 1) {
      cout << "?" << endl;
      return 0;
    }
  }
  cout << char('A' + max_index) << endl;
}