#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  int r=0;
  cin >> r;

  float num=0;
  char operations[10];
  for(int i=0; i<r; i++){
    cin >> num;
    cin.getline(operations, sizeof(operations));

    for(int j=0; operations[j]!='\0'; j++){
      switch(operations[j])
      {
        case '@':
          num*=3;
          break;
        case '%':
          num+=5;
          break;
        case '#':
          num-=7;
          break;
        default:
          break;
      }
    }

    printf("%.2f\n", num);
  }

  return 0;
}