
public class LastDigit {
	
	public static int firstDigit(int n) {
		while(n >= 10) {
			n = n/10;
		}
		return n;
	}
	
	public static int lastDigit(int n) {
		return (n % 10);
	}
	
	public static int secondLast(int n) {
		while(n>=100) {
		n = n/10;
		}
		return (n%10);
	}
	
	public static void main(String[] args) {
		int n = 9172;
		System.out.println(" " + firstDigit(n) + "\n " + lastDigit(n) + "\n " + secondLast(n));
	}
	
}
