#include <iostream>

using namespace std;

int main()
{
  int score;
  int score_sum;
  int winner = 0;
  int winner_score = 0;
  
  for(int i=1; i<=5; i++)
  {
    score_sum = 0;
    for(int j=1; j<=4; j++)
    {
      cin >> score;
      score_sum += score;
    }

    if(score_sum > winner_score) {
      winner_score = score_sum;
      winner = i;
    }
  }

  cout << winner << " " << winner_score << endl;

  return 0;
}