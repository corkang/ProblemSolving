// Problem - https://school.programmers.co.kr/learn/courses/30/lessons/120806

class Solution {
    public int solution(int num1, int num2) {
        int answer = 0;
        
        if( (0<num1 && num1 <= 100) && (0<num2 && num2 <=100))
            answer = (int)(((num1*1.0)/num2)*1000);
        
        return answer;
    }
}