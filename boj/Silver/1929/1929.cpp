#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  // 1. M N 입력받기
  int M, N;
  cin >> M >> N;
  
  // 2. N-1 크기의 vector 'sosu' 생성 및 초기화: 벡터에 2부터 N까지 숫자 대입
  vector<int> sosu((N-1)/2+1);
  sosu[0]=2;
  for(int i=3; i<=(N-1)/2+2; i++) {
    sosu[i-2] = 2*(i-2)+1;
  }

  // 3. For each item in 'sosu': 
  //    배수(다른 Item과 곱한 수)를 벡터에서 제거
  int temp;
  int temp_mul_sosuj;
  int s = sosu.size();
  for (int i=0; i<s; i++) {
    temp = sosu[i];
    for(int j=i; j<s; j++) {
      temp_mul_sosuj = temp*sosu[j];
      if(temp_mul_sosuj > N) break;
      auto idx = find(sosu.begin(), sosu.end(),temp_mul_sosuj);
      if(idx != sosu.end()) {
        sosu.erase(idx);
        s--;
      }
    }
    /*
    for(int j=i+1; j<sosu.size(); j++) {
      if(sosu[j]%temp == 0) {
        sosu.erase(sosu.begin()+j);
        j--;
      }
    }
    */
  }

  /*
  int num; int mul; int j;
  for(int i=0; i<sosu.size(); i++) {
    j = i+1;
    num = sosu[i];
    mul = num * num;
    while(j < sosu.size() || mul <= N) {
      auto found = find(sosu.begin(), sosu.end(), mul);
      if(found != sosu.end()) sosu.erase(found);
      mul = num * sosu[j++];
    }
  }
  */

  int i=0;
  temp = sosu[0];
  s = sosu.size();
  while(temp < M) {
    temp = sosu[i++];
  }
  cout << temp << "\n";
  while(i < s) {
    cout << sosu[i++] << "\n";
  }

  /*  // 4. M <=  <= N 인 item 출력
  int i=0; num=0;
  while(num < M) {
    num = nums[i++];
  }
  cout << num << "\n";
  while(i < nums.size()) {
    cout << nums[i++] << "\n";
  }
  */

  return 0;
}