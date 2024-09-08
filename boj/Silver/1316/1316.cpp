#include <iostream>
#include <string>

using namespace std;

int main() {
  int wordNum;
  cin >> wordNum;
  int groupWordNum = 0;

  int lttrs[26] = {0,};
  string word;
  int lttr;
  int lttr_prev;
  bool isGroupWord;

  for(int i=0; i<wordNum; i++) {
    cin >> word;

    isGroupWord = true;
    fill_n(lttrs, 26, 0);

    lttr_prev = word[0]-'a';
    lttrs[lttr_prev]++;

    for(int j=1; j<word.length(); j++) {
      // 알파벳이 바로 직전 알파벳과 다르고, 기존에 나왔던 알파벳이면 그룹X
      lttr = word[j]-'a';

      if(lttr != lttr_prev && lttrs[lttr] != 0) {
        isGroupWord = false;
        break;
      }

      lttrs[lttr]++;
      lttr_prev = lttr;
    }

    if(isGroupWord) groupWordNum++;
  }

  cout << groupWordNum;
}