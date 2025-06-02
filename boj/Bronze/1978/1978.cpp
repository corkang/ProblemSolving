#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  // 1) 2-1000 수를 저장하는 벡터 sosu 만들기
  // 2) sosu 에서 소수가 아닌 숫자 삭제
  // 3) find() 를 이용해 sosu에 해당 숫자 있는지 확인

  // 1)
  vector<int> sosu(999);
  for(int i=0; i<999; i++) {
    sosu[i] = i+2;
  }

  // 2)
  int temp;
  for(int i=0; i<sosu.size(); i++) {
    temp = sosu[i];
    for(int j=i+1; j<sosu.size(); j++) {
      if(sosu[j]%temp == 0) {
        sosu.erase(sosu.begin()+j);
        j--;
      }
    }
  }

  // for(int i=0; i<sosu.size(); i++) {
  //   cout << sosu[i] << " ";
  // }
  // cout << "\n";

  int N;
  int num;
  cin >> N;
  int count=0;
  for(int i=0; i<N; i++) {
    cin >> num;
    if(find(sosu.begin(), sosu.end(), num) != sosu.end()) count++;
  }

  // 3)
  cout << count << "\n";

  return 0;
}