#include <iostream>

using namespace std;

int calcPrize(int d1, int d2, int d3);

int main()
{
  int N;
  cin >> N;

  int biggestPrize=0;
  int prize=0;

  int i=0;
  while(i<N)
  {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    prize = calcPrize(d1, d2, d3);
    if(prize > biggestPrize) biggestPrize = prize;
    i++;
  }

  cout << biggestPrize << endl;

  return 0;
}

int calcPrize(int d1, int d2, int d3)
{
  int prize=0;
  if(d1 == d2 && d2 == d3)
  {
    prize = 10000 + d1*1000;
  } else if(d1 == d2 || d2 == d3 || d3 == d1) {

    if(d1 == d2 || d1 == d3)
      prize = 1000 + d1*100;

    if(d2 == d3)
      prize = 1000 + d2*100;

  } else {
    int max=d1;
    if(d2 > max) max = d2;
    if(d3 > max) max = d3;

    prize = max*100;
  }

  return prize;
}