#include <iostream>

using namespace std;

int main() {
  int dohwazi[100][100] = {0,}; // 좌표 (x, y) -> 100x + y
  int saekjongE;
  cin >> saekjongE;

  int fromLeft, fromBottom;
  for(int i=0; i<saekjongE; i++) {
    cin >> fromLeft >> fromBottom;
    for(int j=fromLeft; j<fromLeft+10; j++) {
      for(int k=fromBottom; k<fromBottom+10; k++) {
        dohwazi[j][k]++;
      }
    }

  }

  int count=0;
  for(int x=0; x<100; x++) {
    for(int y=0; y<100; y++) {
      if (dohwazi[x][y] != 0) count++;
    }
  }

  cout << count << endl;

  return 0;
}