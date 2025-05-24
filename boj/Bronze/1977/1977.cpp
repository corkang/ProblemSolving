#include <iostream>

using namespace std;

int main()
{
  int M, N;
  cin >> M >> N;

  int i = 1;
  while(i*i < M) 
  {
    i++;
  }

  int min = -1;
  int sum = 0;
  while(i*i <= N)
  {
    if(min == -1) min = i*i;
    sum += i*i;
    i++;
  }

  if(min == -1) cout << min << endl;
  else cout << sum << "\n" << min << endl;

  return 0;
}