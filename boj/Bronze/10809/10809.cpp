#include <iostream>
using namespace std;

int main() {
  int alphabet['z'-'a'+1] = {};
  for(int i=0; i< 'z'-'a'+1; i++) {
    alphabet[i]--;
  }

  string S;
  cin >> S;
  int Slen = S.length();

  for(int i=0; i<Slen; i++) {
    if(alphabet[S[i]-'a'] == -1) {
      alphabet[S[i]-'a'] = i;
    }
  }

  for(int i=0; i<'z'-'a'+1; i++) {
    cout << alphabet[i] << " ";
  }

  return 0;
}