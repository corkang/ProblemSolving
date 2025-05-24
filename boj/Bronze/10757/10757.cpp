#include <iostream>
#include <string>

using namespace std;
/*
string makeAns(string longer, string shorter) {
    string ans;
    int n=0;
    for(int i=-1; i >= -longer.size(); i--) {
        if(-i < shorter.size()) {
            n = int(n/10) + int(shorter[i]-'0') + int(longer[i]-'0');
            ans = char(n%10 + '0') + ans;
        }
        ans = longer[i] + ans;
    }

    return ans;
}

*/

int main()
{
    string a, b;
    cin >> a >> b;

    int alen = a.size();
    int blen = b.size();

    if(alen > blen) {
        while(alen != blen) {
            b = '0' + b;
        }
    } else if (alen < blen) {
        while(alen != blen) {
            a = '0' + a;
        }
    }

    char ans[alen+1];
    ans[alen] = '\0';
    int n=0;
    int t=0;
    for(int i=alen-1; i>-1; i--) {
        n = int(a[i] -'0' + b[i] -'0') +t;
        t=0;
        if(n>=10) {
            t=1;
            n/=10;
        }
        ans[i] = char(n+'0');
    }

    if(t==1) cout << '1';

    // string ans = (a.size() >= b.size())? makeAns(a, b): makeAns(b, a);

    cout << ans << endl;
    
    return 0;
}