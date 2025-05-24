#include <iostream>
#include <string>

using namespace std;

int main()
{
  int casesNum;
  cin >> casesNum;

  int score;
  int consecutive;
  string testCase;

  cin.ignore();

  int i=0;
  while(i<casesNum) 
  {
    getline(cin, testCase);
    score = 0;
    consecutive = 0;

    for(int j=0; j<testCase.size(); j++){
      if(testCase[j] == 'O') {
        consecutive ++;
        score += consecutive;
      } else if(testCase[j] == 'X') {
        consecutive = 0;
      }

      // cout << consecutive << " ";
    }
    
    cout << score << endl;

    testCase.clear();
    
    i++;
  }

  return 0;
}