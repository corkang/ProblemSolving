#include <iostream>

using namespace std;

/* Sol 1 -> wrong
  1. 다 더해서 평균 내기
  2. sum(평균에서 각 매장까지 거리 * 2)
*/

/* Sol 2
  1. 오름차순/내림차순 정렬
  2. 첫 가게와 끝 가게의 중간점에 주차
  3. 차 -> 첫 가게 -> 다음 가게 -> 다음 가게 -> ... -> 마지막 가게 -> 차
*/

/* Sol 3
  1. 오름차순/내림차순 정렬
  2. 첫 가게와 끝 가게의 거리 * 2
*/

/*
void insertionSort(int* arr, int size)
{
  int temp;
  int min_value;
  int min_key;
  for(int j=0; j<size-1; j++)
  {
    min_value = 100;
    for(int k=j; k<size; k++)
    {
      temp = arr[j];
      if(min_value > arr[k]) {
        min_value = arr[k];
        min_key = k;
      }
      arr[j] = arr[min_key];
      arr[min_key] = temp;
    }
  }
}
*/


int main()
{
  int caseNum;
  cin >> caseNum;

  int numOfStores;
  int storeLocation;
  
  int num_min, num_max;

  int i=0;
  while(i<caseNum)
  {
    cin >> numOfStores;

    num_min = 101;
    num_max = -1;

    for(int j=0; j<numOfStores; j++){
      cin >> storeLocation;
      if(storeLocation < num_min) num_min = storeLocation;
      if(storeLocation > num_max) num_max = storeLocation;
    }

    // insertionSort(storeLocation, numOfStores);

    // parkingLot = (storeLocation[0]+storeLocation[numOfStores-1])/2;

    // cout << (storeLocation[numOfStores-1]-storeLocation[0]) * 2 << endl;

    cout << (num_max - num_min) * 2 << endl;

    i++;
  }

  return 0;
}