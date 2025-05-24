#include <iostream>

using namespace std;

class myStack 
{
  public:
    myStack()
    {
      myStack_ = new int;
    }

    void resize(int c) {
      if(c == 0) {
        capacity = 1;
      } else capacity *= 2;

      
      int* temp = new int[capacity];
      for(int i=0; i<capacity/2; i++) {
        temp[i] = myStack_[i];
      }
      delete myStack_;
      myStack_ = temp;
    }

    void push(int v) {
      if(top_index == capacity-1) resize(capacity);
      myStack_[++top_index] = v;
    }

    int pop() {
      if(top_index == -1) return top_index;

      int top_value = top();
      top_index--;

      return top_value;
    }

    int size() {
      return top_index+1;
    }

    int empty() {
      if(top_index == -1) return 1;
      return 0;
    }

    int top() {
      if(top_index == -1) return top_index;
      return myStack_[top_index];
    }

  protected:
    int* myStack_;
    int top_index = -1;
    int capacity = 0;
};

int main()
{
  int num_cmd;
  cin >> num_cmd;

  myStack s = myStack();

  string cmd;
  int num_push;
  for(int i=0; i<num_cmd; i++) {
    cin >> cmd;
    if(cmd == "push") {
      cin >> num_push;
      s.push(num_push);
    } else if(cmd == "pop") {
      cout << s.pop() << endl;
    } else if(cmd == "size") {
      cout << s.size() << endl;
    } else if(cmd == "empty") {
      cout << s.empty() << endl;
    } else if(cmd == "top") {
      cout << s.top() << endl;
    }
  }

  return 0;
}