import java.util.*;

public class Main {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int num1, num2;
	int rel=0;
	ArrayList<Integer> list = new ArrayList<>();

	do {
	    num1 = sc.nextInt();
	    num2 = sc.nextInt();
	    if(num1==0) break;

	    if(num1<num2 && num2 % num1 == 0) list.add(1);
	    else if(num1>num2 && num1 % num2==0) list.add(2);
	    else list.add(3);
	} while(num1 !=0 && num2 != 0);

	for(int i=0; i<list.size(); i++)
	    switch (list.get(i)) {
		case 1: System.out.println("factor");
		    break;
		case 2: System.out.println("multiple");
		    break;
		default: System.out.println("neither");
		    break;
	    }
    }
}
