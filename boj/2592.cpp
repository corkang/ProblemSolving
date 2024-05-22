#include <iostream>
#include <map>

using namespace std;

int main()
{
  int num_key;
  int max_key=0;
  int max_value=0;
  int sum=0;

  map<int, int> numList; // key, value
  

  for(int i=0; i<10; i++)
  {
    cin >> num_key;
    sum += num_key;

    numList[num_key]++; // num_key가 없으면 삽입 후 value 1, 있으면 value +1
  }

  for(auto num = numList.begin(); num != numList.end(); num++)
  {
    if(int(num->second) > max_value){
      max_value = num->second;
      max_key = num->first;
    } 
    // cout << "최대: " << max_value << " / ";
    // cout << num->first << " : " << num->second << "번" << endl;
  }

  cout << endl;
  cout << sum/10 << endl;
  cout << max_key << endl;

  return 0;
}