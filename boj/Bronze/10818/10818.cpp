#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  int num; int minNum=1000001; int maxNum=-1000001;
  for(int i=0; i<N; i++) {
    cin >> num;
    if(num < minNum) minNum = num;
    if(num > maxNum) maxNum = num;
  }

  cout << minNum << " " << maxNum;

  return 0;
}