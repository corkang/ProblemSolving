// Problem - https://school.programmers.co.kr/learn/courses/30/lessons/120812

import java.util.Arrays;

// Solution 1 - 원소 수만큼 배열 만들고 원소별 횟수 세아리기
class Solution1 {
    public int solution(int[] array) {
        int answer = 0;
        int[] count = new int[array.length];
        int answerCount = 0;
        
        count[0]++;
        for(int i=1; i<array.length; i++){
            for(int j=0; j<=i; j++){
                if(array[i] == array[j]){
                    count[j]++;
                    continue;
                }
            }
        }
        
        for(int i=1; i<array.length; i++){
            if(count[i] > count[answer]){
                answer = i;
                answerCount = 0;
            } else if (count[i] == count[answer]) {
                answerCount++;
            }
        }
        
        if(answerCount != 0) answer = -1;
        else answer = array[answer];
        
        return answer;
    }
}

// Solution 2 - 오름차순 정렬 후 세아리기 (uc)

class Solution2 {
    public int solution(int[] array) {
        int answer = 0;
        int temp = 1;
        int highest = 0;
        boolean again = false;
        Arrays.sort(array);
        
        for(int i=1; i<array.length; i++){
            if(array[i-1] == array[i]){
                temp ++;
            }
            if ((array[i-1]!=array[i]) || (i == array.length-1)){
                if(highest == temp) again = true;
                if(highest < temp) {
                    if(again == true) again = false;
                    highest = temp;
                    answer = i-1;
                    temp = 1;
                }
            }
        }
        
        if(again == true) answer = -1;
        else answer = array[answer];
        return answer;
    }
}