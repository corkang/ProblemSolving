#include <iostream>

using namespace std;

int main() {
  int table[9][9] = {0, };

  int temp;

  int maxNum=0;
  int maxR, maxC;


  for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
      cin >> temp;
      if(temp > maxNum) {
        maxNum = temp;
        maxR = i+1;
        maxC = j+1;
      }

      table[i][j] = temp;
    }
  }

  cout << maxNum << " \n";
  cout << maxR << " " << maxC;
}