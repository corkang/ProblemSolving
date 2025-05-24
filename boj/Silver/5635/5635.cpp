#include <iostream>
#include <string>

using namespace std;

/*
typedef struct personInfo
{
  string name;
  int d;
  int m;
  int y;

  personInfo() {}
  personInfo(string personName, int dd, int mm, int yy) : d(dd), m(mm), y(yy) {
    name.assign(personName);
  }
};
*/

int main()
{
  int caseNum;
  cin >> caseNum;

  string name;
  int dd;
  int mm;
  int yy;

  cin >> name >> dd >> mm >> yy;  // yyyy mm dd
  int youngestAge = 10000*yy + 100*mm + dd; // 보다 크면 younger
  string youngestName = name;
  int oldestAge = 10000*yy + 100*mm + dd; // 보다 작으면 older
  string oldestName = name;


  int i=1;
  while(i<caseNum)
  {
    cin >> name >> dd >> mm >> yy;
    if(youngestAge < (10000*yy + 100*mm + dd))
    {
      youngestAge = 10000*yy + 100*mm + dd;
      youngestName.assign(name);
    }

    if(oldestAge > (10000*yy + 100*mm + dd))
    {
      oldestAge = 10000*yy + 100*mm + dd;
      oldestName.assign(name);
    }

    i++;
  }

  cout << youngestName << endl;
  cout << oldestName << endl;
  
  return 0;
}