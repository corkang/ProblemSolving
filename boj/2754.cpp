#include <iostream>

using namespace std;

int main()
{
  char grade[3];
  cin >> grade;
  double score=0;

  char gradeList[5] = {'F', 'D', 'C', 'B', 'A'};
  

  for(int i=0; i<sizeof(gradeList)/sizeof(char); i++)
  {
    if(grade[0] == gradeList[i]) score = i;
  }

  if(grade[1] == '+') score += 0.3;
  else if(grade[1] == '-') score -= 0.3;

  printf("%.1f", score);
  
  return 0;
}