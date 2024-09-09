#include <iostream>
#include <string>

using namespace std;

int main() {
  string subject, grade;
  double credit;
  double grade_temp;
  double credit_sum=0, grade_sum = 0;

  for(int i=0; i<20; i++) {
    cin >> subject >> credit >> grade;
    if(grade == "P") continue;
    
    if(grade == "F") {
      credit_sum += credit;
      continue;
    }

    grade_temp = (grade[1]=='+')? 4.5: 4;
    grade_temp -= (int)(grade[0]-'A');
    grade_sum += grade_temp*credit;
    credit_sum += credit;
  }

  double ans = grade_sum / credit_sum;
  cout << ans << endl;
}