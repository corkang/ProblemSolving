#include <iostream>
using namespace std;

int main() {
  int N; cin >> N;
  int scores[1000] = {0};

  int maxNum=0;
  for(int n=0; n<N; n++) {
    cin >> scores[n];
    if(scores[n] > maxNum) maxNum = scores[n];
  }
  
  double sum=0;
  for(int n=0; n<N; n++) {
    sum += scores[n]*1.0/maxNum*100;
  }
  cout << sum*1.0/N << endl;

  return 0;
}