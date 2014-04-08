import java.util.Scanner;
public class Main {
	
	private static final int THR = 1000;
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		for( int i = 0; i < n; i++) {
			int a = s.nextInt();
			int b = s.nextInt();
			int ans = mypow(a,b);
			if(ans == 0) ans = 10;
			System.out.println(mypow(a,b));
		}
		s.close();
	}
	private static int mypow(int a, int b) {
		if (a == 1 || b == 0)
			return 1;
		else if (b==1)
			return a;
		else if( b > THR ) {
			int b1 = (int) Math.sqrt(b);
			int b2 = b - b1 * b1;
			int r1 = mypow(mypow(a,b1),b1);
			int r2 = mypow(a,b2);
			return r1 * r2 % 10;
		} else {
			int ret = 1;
			for(int i = 0; i < b; i++ )
				ret = (ret * a) % 10;
			return ret;
		}		
	}	
}