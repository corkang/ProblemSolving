#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  int pointsNum;
  cin >> pointsNum;

  int x=0;
  int y=0;
  int quadrants[6] = {0}; // AXIS, 1, 2, 3, 4

  int i=0;
  while(i<pointsNum) 
  {
    cin >> x >> y;

    if(x==0 || y==0) quadrants[0]++;
    else if(x>0 & y>0) quadrants[1]++;
    else if(x<0 & y>0) quadrants[2]++;
    else if(x<0 & y<0) quadrants[3]++;
    else if(x>0 & y<0) quadrants[4]++;

    i++;
  }

  printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n", quadrants[1], quadrants[2], quadrants[3], quadrants[4], quadrants[0]);

  return 0;
}