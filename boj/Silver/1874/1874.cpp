#include <iostream>

using namespace std;

int main()
{
  int num_item;
  cin >> num_item;

  int min=0, max=0;
  char* order = new char[num_item*2+1];
  int order_index = 0;

  int n;

  int i;
  for(i=0; i<num_item; i++)
  {
    cin >> n;
      
    if(i == 0) {
      for(int j=0; j<n-max; j++) order[order_index++] = '+';
      order[order_index++] = '-';
      min = n;
      max = n;
    } else if(n > max) { // max보다 크면 - max, min 교체
      for(int j=0; j<n-max; j++) order[order_index++] = '+';
      order[order_index++] = '-';

      max = n;
      min = n;
    } else if(n < min) { // min보다 작으면 - min 교체
      min = n;
      order[order_index++] = '-';
    } else { // min과 max 사이
      cout << "NO" << '\n';
      return 0;
    }
  }
  

  for(int i=0; i<num_item*2; i++)
  {
    cout << order[i] << '\n';
  }

  return 0;
}