import java.util.*;

public class Main {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int N = sc.nextInt();
	int K = sc.nextInt();
	ArrayList<Integer> factors = new ArrayList<>();
	
	int checkMax = N/2;
	for(int i=1; i<checkMax; i++) {
	    if(N%i == 0) {
		factors.add(i);
		if(i*i == N) continue;
		factors.add(N/i);
	    }
	    if(N/i < checkMax) checkMax = N/i;
	}

	factors.sort(Comparator.naturalOrder());
	// System.out.println(Arrays.toString(factors.toArray()));	

	if(factors.size() < K) System.out.println(0);
	else System.out.println(factors.get(K-1));
    }
}
