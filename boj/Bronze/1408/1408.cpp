#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
  string currentTime;
  string beginTime;

  cin >> currentTime >> beginTime;

  /*
  int hNow, mNow, sNow;
  int hStarted, mStarted, sStarted;

  hNow = stoi(timeNow.substr(0,2));
  mNow = stoi(timeNow.substr(3,2));
  sNow = stoi(timeNow.substr(6,2));
  
  hStarted = stoi(timeNow.substr(0,2));
  mStarted = stoi(timeNow.substr(3,2));
  sStarted = stoi(timeNow.substr(6,2));
  */

  int currentTimeIntArray[3] = {0};
  int beginTimeIntArray[3] = {0};
  int leftTimeIntArray[3] = {0};

  for(int i=0; i<3; i++) 
  {
    currentTimeIntArray[i] = stoi(currentTime.substr(3*i, 2));
    beginTimeIntArray[i] = stoi(beginTime.substr(3*i, 2));
  }

  // 14시 00분 10초 시작, 현재 13시 58분 20초  --> 0h 1m 40s
  for(int i=2; i>-1; i--) 
  {
    leftTimeIntArray[i] = leftTimeIntArray[i] + beginTimeIntArray[i] - currentTimeIntArray[i];
    if(i==0 && leftTimeIntArray[i]<0) leftTimeIntArray[i] += 24;
    else if(leftTimeIntArray[i]<0) {
      leftTimeIntArray[i-1] -= 1;
      leftTimeIntArray[i] += 60;
    }
  }

  /*
  leftTimeIntArray[0] = beginTimeIntArray[0] - currentTimeIntArray[0];
  if(leftTimeIntArray[0] < 0) leftTimeIntArray[0] += 24;

  leftTimeIntArray[1] = beginTimeIntArray[1] - currentTimeIntArray[1];
  if(leftTimeIntArray[1] < 0) 
  {
    leftTimeIntArray[0] --;
    leftTimeIntArray[1] += 60;
  }

  leftTimeIntArray[2] = beginTimeIntArray[2] - currentTimeIntArray[2];
  if(leftTimeIntArray[2] < 0) 
  {
    leftTimeIntArray[1] --;
    leftTimeIntArray[2] += 60;
  }
  */

  printf("%02d:%02d:%02d\n", leftTimeIntArray[0], leftTimeIntArray[1], leftTimeIntArray[2]);


  return 0;
}