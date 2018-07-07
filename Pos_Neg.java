import java.util.*;

public class Pos_Neg {
	public static void main(String[] args) {
		int n;
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the number to be tested ");
		n = s.nextInt();
		
		if(n>0) {
			System.out.println("The number is positive ");
		}
		
		else if(n<0) System.out.println("The number is negative ");
		else System.out.println("The number is Zero ");
		
		
		
	}
}
