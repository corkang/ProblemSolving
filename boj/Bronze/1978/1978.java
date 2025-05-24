import java.util.*;

public class Main {
    public static void main(String[] args){
	Scanner sc = new Scanner(System.in);
	int N = sc.nextInt();
	int count=0;
	int num;
	boolean isPrime;

	for(int i=0; i<N; i++){
	    num = sc.nextInt();
	    if(num == 1) continue;
	    isPrime = true;
	    for(int j=2; j<num; j++){
		if(num%j == 0) {
		    isPrime = false;
		    break;
		}
	    }
	    if(isPrime == true) count++;
	}

	System.out.println(count);
    }
}

