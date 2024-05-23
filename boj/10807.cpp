#include <iostream>
#include <map>


using namespace std;

int main()
{
  int inputNum;
  cin >> inputNum;

  map<int, int> numMap;
  int num;

  int i=0;
  while(i < inputNum)
  {
    cin >> num;

    numMap[num]++;

    i++;
  }

  int numFind_key;
  cin >> numFind_key;

  int numFind_value = (numMap.find(numFind_key) == numMap.end())? 0 : numMap.find(numFind_key)->second;
  cout << numFind_value << endl;

  return 0;
}