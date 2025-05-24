#include <iostream>

using namespace std;

int main()
{
  int caseNum;
  cin >> caseNum;

  int inputNum; // inputNum <= 1,000,000  ||  2^20 = 1,048,576
  int count;

  int i=0;
  while(i<caseNum)
  {
    cin >> inputNum;
    int binaryInputNum[20] = {0};
    count = 0;
    
    while(inputNum >= 1)
    {
      binaryInputNum[count] = inputNum%2;
      inputNum /= 2;
      count++;
    }

    for(int j=0; j<count; j++)
    {
      if(binaryInputNum[j] == 1) cout << j << " ";
    }

    cout << endl;

    i++;
  }

  return 0;
}