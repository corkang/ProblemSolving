#include <iostream>

using namespace std;

int main()
{
  int num_divisor;
  cin >> num_divisor;

  int divisor_list[num_divisor];
  // int* realDivisor = new int[num_divisor];
  
  for(int i=0; i<num_divisor; i++) {
    cin >> divisor_list[i];
  }

  if(num_divisor == 1) {
    cout << divisor_list[0] * divisor_list[0] << endl;
    return 0;
  }

  int min_index, temp;
  for(int i=0; i<num_divisor-1; i++) {
    min_index = i;

    for(int j=i+1; j<num_divisor; j++) {
      if(divisor_list[min_index] > divisor_list[j]) {
        min_index = j;
      }
    }

    temp = divisor_list[i];
    divisor_list[i] = divisor_list[min_index];
    divisor_list[min_index] = temp;
  }

  cout << divisor_list[0] * divisor_list[num_divisor-1] << endl;

  return 0;
}