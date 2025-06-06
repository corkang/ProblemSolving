#include <iostream>
#include <vector>

using namespace std;

void printM(int depth, int N, int M, vector<int>& mArr) {  // reference(&)
  bool pass;

  for(int i=1; i<=N; i++) {
    pass = false;
    for(int j=0; j<depth; j++) {
      if(mArr[j] == i) pass = true;
    }
    if(pass == true) continue;

    mArr[depth] = i;

    if(depth != M-1) printM(depth+1, N, M, mArr);
    else {
      for(int j=0; j<M; j++) {
        cout << mArr[j] << " ";
      }
      cout << "\n";
    }
  }
}


int main() {
  int N, M;
  cin >> N >> M;

  vector<int> mArr(M,0);

  printM(0, N, M, mArr);

  return 0;
}