#include <iostream>

using namespace std;

int main() {
  int students[30] = {0};

  int s;
  for(int i=0; i<28; i++) {
    cin >> s;
    students[--s] = 1;
  }

  for(int i=0; i<30; i++) {
    if(students[i] == 0) cout << i+1 << "\n";
  }
  cout << endl;

  return 0;
}