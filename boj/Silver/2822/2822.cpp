#include <iostream>

using namespace std;

void shift(int* arr, int size, int fromIndex) {
  
}

int main()
{
  int scores[8];
  int scoresInOrder[5];
  
  for(int i=0; i<8; i++) {
    cin >> scores[i];
  }

  int biggest = 0;
  int maximizedSum = 0;
  
  for(int i=0; i<5; i++) {
    biggest = 0;

    for(int j=0; j<8; j++) {
      if(i == 0 || scores[j] < scoresInOrder[i-1]) {
        if(scores[j] > biggest) biggest = scores[j];
      }
    }

    scoresInOrder[i] = biggest;
    maximizedSum += biggest;
  }

  cout << maximizedSum << endl;
  for(int i=0; i<8; i++) {
    for(int j=0; j<5; j++) {
      if(scores[i] == scoresInOrder[j]) {
        cout << i+1 << " ";
        break;
      }
    }
  }

  cout << endl;

  return 0;
}