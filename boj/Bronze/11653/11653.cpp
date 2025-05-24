#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int i=2;
    // i로 나눠지지 않을 때까지 i로 나누고 i 출력.
    // 나눠지지 않으면 i = i+1
    while(i <= N)
    {
        if(N%i == 0) {
            cout << i << endl;
            N = N / i;
        } else {
            i = i+1;
        }
    }
    
    return 0;
}