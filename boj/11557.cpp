#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int T; // 테스트케이스의 숫자
    cin >> T;
    
    int currentCaseNum = 0;
    while(currentCaseNum < T){
        int N; // 학교의 수
        cin >> N;
        
        char S[21]; // 학교 이름
        long long L=0; // 소비한 술의 양
        char bestDrinkingSchool[21];
        long long mostLiquorNum=0;

        for(int i=0; i<N; i++){
            cin >> S >> L;
            if(L > mostLiquorNum){
                mostLiquorNum = L;
                memcpy(bestDrinkingSchool, S, sizeof(S));
            }

        }
        
        cout << bestDrinkingSchool << endl;

        currentCaseNum++;
    }
    
    return 0;
}