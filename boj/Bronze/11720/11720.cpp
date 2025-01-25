#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  string str;
  cin >> str;

  int sum=0;
  for(int n=0; n<N; n++) {
    sum += int(str[n]) - 48; // 0의 ascii num이 48임.
  }
  cout << sum << endl;

  return 0;
}