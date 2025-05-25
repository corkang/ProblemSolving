#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;

  int p; int price; string name;
  for(int i=0; i<n; i++) {
    map<int, string> players;
    cin >> p;
    for(int j=0; j<p; j++) {
      cin >> price >> name;
      players.insert(make_pair(price, name));
    }
    cout << (--players.end())->second << endl;
  }


  return 0;
}