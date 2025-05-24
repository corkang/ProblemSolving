#include <iostream>

using namespace std;

int main() {
  int num[9];
  int maxNum; int idx=1;
  for(int i=0; i<9; i++) {
    cin >> num[i];
    if(i==0) maxNum = num[i];
    else if(num[i] > maxNum) {
      maxNum = num[i];
      idx = i+1;
    }
  }

  cout << maxNum << "\n" << idx << endl;

  return 0;
}