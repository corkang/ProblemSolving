// Problem - https://school.programmers.co.kr/learn/courses/30/lessons/120811

import java.util.Arrays;

class Solution {
    public int solution(int[] array) {
        int answer = 0;
        Arrays.sort(array);
        answer = array[array.length/2];
        return answer;
    }
}