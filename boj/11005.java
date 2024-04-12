import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int B = sc.nextInt();
        
        int quotient=N, remainder=0;
        String ans = "";
	if(quotient==0) ans="0";
        while(quotient!=0) {
            remainder = quotient%B;
            if(remainder < 10) {
		ans = Integer.toString(remainder) + ans;
            } else {
		ans = Character.toString((char)(remainder+'A'-10)) + ans;
            }
            quotient = quotient / B;
        }

        System.out.println(ans);
    }
}
