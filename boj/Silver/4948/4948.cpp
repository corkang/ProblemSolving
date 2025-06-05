#include <iostream>
#include <vector>

using namespace std;

int main() {
  int max=0;
  vector<int> inputs;

  int temp=-1;
  while(temp!=0) {
    cin >> temp;
    if(temp==0) break;
    if(temp > max) max = temp;
    inputs.push_back(temp);
  }


  vector<int> nums(2*max+1, 0);
  for(int i=1; i<2*max+1; i++) {
    nums[i] = i;
  }

  for(int i=2; i*i<2*max+1; i++) {
    for(int j=2*i; j<2*max+1; j+=i) {
      nums[j] = 0;
    }
  }

  // for(int i=0; i<nums.size(); i++) {
  //   cout << nums[i] <<" ";
  // }

  int lowerB, upperB;
  int count;
  for(int i=0; i<inputs.size(); i++) {
    count=0;
    lowerB = inputs[i];
    upperB = inputs[i]*2;
    for(int j=lowerB+1; j<=upperB; j++) {
      if(nums[j]!=0) count++;
    }
    cout << count << "\n";
  }

  return 0;
}