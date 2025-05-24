#include <iostream>
using namespace std;

int main() {
  int P;
  cin >> P;

  int R; string S; string T;
  
  for(int p=0; p<P; p++) {
    cin >> R >> S;
    T = S[0];
    for(int s=0; s<S.length(); s++) {
      for(int r=0; r<R; r++) {
        if(s==0 && r==0) continue;
        T += S[s];
      }
    }
    cout << T << endl;
  }


  return 0;
}