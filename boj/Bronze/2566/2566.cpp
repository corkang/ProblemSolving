#include <iostream>

using namespace std;

int main() {
  int** row[] = new *int[9];
  int* r[] = new int[9];

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

      r[i][j] = temp;
    }
  }

  cout << maxNum << " \n";
  cout << maxR << " " << maxC;
}