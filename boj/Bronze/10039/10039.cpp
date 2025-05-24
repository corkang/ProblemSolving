#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int score;
    int i=0;
    while(i<5){
        cin >> score;
        sum += (score >= 40)? score: 40;
        i++;
    }
    
    cout << sum/5 << endl;
    return 0;
}