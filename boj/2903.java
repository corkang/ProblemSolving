import java.util.*;

public class Main {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int steps = sc.nextInt();
	int n = (int)Math.pow(2, steps);
	System.out.println((n+1)*(n+1));
    }
}
