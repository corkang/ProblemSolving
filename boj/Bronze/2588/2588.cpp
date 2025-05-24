#include <iostream>

using namespace std;

int main()
{
    int n1;
    char n2[4];
    cin >> n1 >> n2;
    
    int result = 0;
    int j=1;
    for(int i=2; i>-1; i--){
        int tmp = n1 * (n2[i]-'0');
        cout << tmp << endl;
        result += tmp*j;
        j *= 10;
    }
    cout << result << endl;
    
    return 0;
}