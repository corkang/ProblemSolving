#include <iostream>
#include <string>

using namespace std;

bool isIn(char* arr, int size, char lttr);


int main()
{
  string str;
  cin >> str;

  char croatians[] = {'c', 'd', 'l', 'n', 's', 'z'};
  int lttrNum = 0;

  for(int i=0; i<str.length(); i++) {
    if(str[i] == 'd' && i < str.length()-2) {
      if(str[i+1] == 'z' && str[i+2] == '=') continue;
    } // "dz="인 경우

    // 아래 조건문에서 else if를 사용하면, d-가 걸러지지 않음. (위에서 d가 한 번 걸러졌기 때문에 다시 검사되지 않음) -> 반례 d-aa 출력 4 정답 3
    if(i<str.length()-1 && isIn(croatians, 6, str[i])) {
      if((str[i] == 'c' || str[i] == 'z' || str[i] == 's') && str[i+1] == '=')
        continue;
      if((str[i] == 'c' || str[i] == 'd') && str[i+1] == '-')
        continue;
      if((str[i] == 'l' || str[i] == 'n') && str[i+1] == 'j')
        continue;
    } // "dz=" 아닌 croatian letter인 경우
    lttrNum ++;
  }

  cout << lttrNum << endl;
}

bool isIn(char* arr, int s, char lttr) {
  for(int i=0; i<s; i++) {
    if(arr[i] == lttr) return 1;
  }
  return 0;
}