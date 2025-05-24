import java.util.*;

public class Main {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int A = sc.nextInt();
	int B = sc.nextInt();
	int V = sc.nextInt();
	// int currentSnailHeight = 0;
	int day = 0;
	
	/* 덧셈하며 체크 -> 시간초과
	while(currentSnailHeight < V) {
	    day++;
	    currentSnailHeight += A;
	    if(currentSnailHeight >= V) break;
	    currentSnailHeight -= B;
	}
	*/

	day = (int)(Math.ceil((V-A)/(double)((A-B)))) + 1;

	System.out.println(day);
    }
}

