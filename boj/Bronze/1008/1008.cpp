#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
  double a, b;
  
  cin >> a >> b;
  printf("%.9f\n", a/(b*1.0));

  return 0;
}