#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  vector<int> nums(10001, 0);
  
  int num;
  for(int i=0; i<N; i++) {
    cin >> num;
    nums[num]++;
  }

  for(int i=1; i<=10001; i++) {
    while(nums[i] != 0) {
      cout << i << "\n";
      nums[i]--;
    }
  }

  return 0;
}