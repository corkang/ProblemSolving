#include <iostream>

using namespace std;

void insertionSort(int* arr, int size){
  int tmp;
  int min_value;
  int min_key;

  for(int i=0; i<size-1; i++) {
    min_value = 1001;

    for(int j=i; j<size; j++) {
      if(arr[j] < min_value) {
        min_value = arr[j];
        min_key = j;
      }
    }

    tmp = arr[i];
    arr[i] = arr[min_key];
    arr[min_key] = tmp;
  }

}

int main()
{
  int caseNum;
  cin >> caseNum;

  int numList[1001] = {0};

  for(int i=0; i< caseNum; i++) {
    cin >> numList[i];
  }

  insertionSort(numList, caseNum);

  for(int i=0; i<caseNum; i++) { 
    cout << numList[i] << endl;
  }

  return 0;
}