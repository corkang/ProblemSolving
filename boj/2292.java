import java.util.*;

public class Main {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int roomNum = sc.nextInt();
	int passedRoomCount=1;
	int scope=2;

	while(roomNum >= scope) {
	    scope += 6*passedRoomCount;
	    passedRoomCount++;
	}
	
	System.out.println(passedRoomCount);
    }
}
