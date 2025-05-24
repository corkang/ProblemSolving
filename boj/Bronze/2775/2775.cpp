#include <iostream>

using namespace std;

class resident_num {
  public:
    resident_num(int floor_num, int room_num_) {
      room_num = room_num_;
      size = (floor_num+1) * room_num;  
      rooms = new int[size];

      for(int i=0; i<size; i++) {
        if(i < room_num) {
          rooms[i] = i+1;
        } else if(i%room_num == 0) {
          rooms[i] = 1;
        } else {
          rooms[i] = rooms[i-1] + rooms[i-room_num];
        }
      }

      ans = rooms[size-1];
    }

    void showApt() {
      for(int i=0; i<size; i++) {
        if(i % room_num == 0) cout << endl;
        cout << rooms[i] << " ";
      }
    }

    int resident() {
      return ans;
    }

  protected:
    int* rooms;
    int size;
    int ans;
    int room_num;
};

int main()
{
  int T;
  cin >> T;

  int k, n;

  int i=0;
  while(i<T) {
    cin >> k >> n;
    resident_num rn(k, n);
    // rn.showApt();
    // cout<<endl;
    cout << rn.resident() << endl;
    i++;
  }

  return 0;
}