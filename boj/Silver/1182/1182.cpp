#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);

  int N, S;
  cin >> N >> S;
  vector< vector<int> > nums(N, vector<int>);

  for(int i=0; i<N; i++) {
    cin >> nums[0][i];
  }

  


  return 0;
}