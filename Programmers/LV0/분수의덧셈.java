// Problem - https://school.programmers.co.kr/learn/courses/30/lessons/120808

class Solution {
    public int[] solution(int numer1, int denom1, int numer2, int denom2) {
        int ansNumer = numer1*denom2 + numer2*denom1;
        int ansDenom = denom1*denom2;
        
        for(int i=((ansNumer<ansDenom)? ansNumer: ansDenom); i>0 ; i--){
            if((ansNumer%i == 0) && (ansDenom%i == 0)){
                ansNumer /= i;
                ansDenom /= i;
            }
        }
        
        int[] answer = {ansNumer, ansDenom};
        return answer;
    }
}