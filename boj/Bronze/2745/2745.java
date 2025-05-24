import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String N = sc.next();  // 숫자
        int B = sc.nextInt();  // 진법
        
        int j=1, num=0;  // 자릿수(j), 계산용(num)
        int rslt=0;
        for(int i=0; i<N.length(); i++){
            if(B <= 10) num = N.charAt(i)-0;
            else {
                if(Character.getNumericValue(N.charAt(i)) == -1) {
                    num = 10 + N.charAt(i)-'A';
                } else {
                    num = Character.getNumericValue(N.charAt(i));
                }
            }
            
            rslt += num * j;
            j = j*B;
        }
        
        System.out.println(rslt);
    }
}
