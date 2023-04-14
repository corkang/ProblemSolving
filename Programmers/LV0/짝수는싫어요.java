// Problem - https://school.programmers.co.kr/learn/courses/30/lessons/120813

class Solution {
    public int[] solution(int n) {
        int[] answer = {};
        
        if(n==1) answer = new int[1];
        else answer = new int[n/2+n%2];
        
        for(int i=0; i<answer.length; i++) 
            answer[i] = 2*i+1;
        
        return answer;
    }
}