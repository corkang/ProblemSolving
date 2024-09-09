#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int caseNum = 0;
    cin >> caseNum;
    int x1, y1, r1;
    int x2, y2, r2;
    double lenAB;
    
    for(int i=0; i<caseNum; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        if(x1 == x2 && y1 == y2 && r1 == r2) cout << -1 << endl;
        
        lenAB = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
        if(lenAB < r1+r2) cout << 2 << endl;
        else if(lenAB == (r1+r2)*1.0) cout << 1 << endl;
        else if(lenAB > r1+r2) cout << 0 << endl;
    }
    
    return 0;
}