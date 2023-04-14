// Problem - https://school.programmers.co.kr/learn/courses/30/lessons/120809

class Solution {
    public int[] solution(int[] numbers) {
        int len = numbers.length;
        int[] answer = new int[len];

        for(int i=0; i<len; i++){
            answer[i] = numbers[i]*2;
        }
        
        return answer;
    }
}