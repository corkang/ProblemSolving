#include <iostream>

using namespace std;

int main()
{
  int ans[] = {1, 1, 2, 2, 2, 8};

  int tmp;
  for(int i=0; i<6; i++) {
    cin >> tmp;

    cout << ans[i]-tmp << " ";
  }
  
  cout << endl;
}