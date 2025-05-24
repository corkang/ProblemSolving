#include <iostream>

using namespace std;

int main()
{
  int num_list[5];
  int sum=0;

  for(int i=0; i<5; i++) {
    cin >> num_list[i];
    sum += num_list[i];
  }

  int temp;
  for(int i=1; i<5; i++) {
    temp = num_list[i];
    int j=i;
    for(; j > 0 && temp < num_list[j-1]; j--) {
      num_list[j] = num_list[j-1];
    }
    num_list[j] = temp;
  }

  cout << sum/5 << endl;
  cout << num_list[2] << endl;

  return 0;
}