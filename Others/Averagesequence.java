import java.util.Scanner;


public class Main {

	public static void main(String[] args) {

		Scanner cin = new Scanner(System.in);

		int n = cin.nextInt(),s;

		int a[] = new int[n + 1];

		for (int i = 1; i <= n; ++i) a[i] = cin.nextInt();

		System.out.print(a[1]);

		s=a[1];

		for(int i=2;i<=n;++i) {

			s+=(a[i]*i-s);

			System.out.print(" "+s);

		}

		System.out.println();

	}





}