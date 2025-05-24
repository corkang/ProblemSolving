import java.util.*;

public class Main {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int num=0;
	ArrayList<Integer> numList = new ArrayList<>();

	// input
	while(true) {
	    num = sc.nextInt();
	    if(num == -1) break;
	    numList.add(num);
	}

	int rangeMax;
	ArrayList<Integer> factors = new ArrayList<>();
	for(int i=0; i<numList.size(); i++){
	    num = numList.get(i);
	    rangeMax = num/2;
	    for(int j=1; j<rangeMax; j++) {
		if(num%j == 0) {
		    factors.add(j);
		    if(i*i == num) continue;
		    factors.add(num/j);
		    if(num/j < rangeMax) rangeMax = num/j;
		}
	    }

	    factors.sort(Comparator.naturalOrder());
	    String str = num + " = 1";
	    int n = num-1;
	    for(int j=1; j<factors.size()-1; j++){
		n -= factors.get(j);
		str = str + " + " + factors.get(j);
	    }
	    if(n != 0) System.out.println(num + " is NOT perfect.");
	    else System.out.println(str);
	    
	    factors.clear();
	}
    }
}
