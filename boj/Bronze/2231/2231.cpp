#include <iostream>
#include <algorithm>

using namespace std;

int sumN(int n, int lenN, vector<int> &eachN) {
  int sum = n;
  for(int i=0; i<lenN; i++) {
    sum += eachN[i];
  }

  return sum;
}

int possibleN(int n, int len_left, vector<int> &eachN) {
  int possible_max = 0;
  
}

int eachNum(int n, int jari) {
  int result=1;
  for(int i=1; i<jari; i++) {
    result *= 10;
  }
  result += 1;

  return result * n;
}

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  int n = N;
  int lenN = 1; // N 자리수
  while(n/10 != 0) {
    n /= 10;
    lenN++;
  }

  vector<int> eachN(lenN, 0);
  for(int i=0, n=N; i<lenN; i++) {
    eachN[i] = (n/10)%10;
    n = n/10;
  }

  int d = sumN(N, lenN, eachN) - N; // distance.
  


  // distance를 만드는 조합 찾기
  int temp_d;
  int temp_i1, temp_i2;
  for(int i=0; i<lenN; i++) {
    temp_d = eachNum(1, lenN-i);
    temp_i1 = eachNum(1, lenN-2*i);
    while(temp_d != d) {
      if(temp_d)
    }
  }



  for(int i=0; i<lenN; i++) {
    eachN[i]--;
    if(N-sumN(N, lenN, eachN) > possibleN(N, lenN-i-1, eachN)) {

    }
  }



  return 0;
}




// 몇자리수인지 -> i

// i == 2
// AB -> AB + A + B = CD
// CD = 10A + (A+2B)
// C = A + (A+2B)/10
// D = (A+2B)%10

// i == 3
// ABC -> ABC + A + B + C = DEF
// DEF = 101A + 11B+ 2C = 100A + 10B + (A+B+2C)
// F = (A+B+2C)%10
// E = (B + (A+B+2C)/10))%10
// D = A + ((10B + (A+B+2C))/100)

// C <- -1
// DEF = DEF -2
// B <- -1
// DEF = DEF -11
// A <- -1
// DEF = DEF -101


// 216 -> 216 + 2 + 1 + 6 = 225 (-9 needed)
// 215 -> 215 + 2 + 1 + 5 = 223 (-7 needed)
// 206 -> 206 + 2 + 0 + 6 = 214 (+2 needed) 
// 207 -> 207 + 2 + 0 + 7 = 216
// 116 -> 116 + 1 + 1 + 6 = 124 (+92 needed)

// B +1 하면 +11 되므로, Possible increase amount = 11 * (9 - B)
// C +1 하면 +2 되므로, Possible increase amount = 2 * (9 - C)

// 제일 앞자리수(i==0, eachN[i])부터 -1 해보고, Possible increase amount = (9-eachN[i+1]) (10 ** (lenN-i-1) + 1)