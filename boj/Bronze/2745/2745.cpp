#include <iostream>

using namespace std;

int main() {
  string N;
  int B;
  cin >> N >> B;

  char n; int temp; int answer=0;
  for(int i=0; i<N.length(); i++) {
    n = N.at(i);
    if(isdigit(n)) {
      temp = int(n-'0');
    } else {
      temp = int(n-'A')+10;
    }
    answer += temp * pow(B, N.length()-i-1);
  }

  cout << answer << endl;

  return 0;
}