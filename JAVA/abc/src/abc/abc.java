package abc;

import java.util.Scanner;

public class abc {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int T, N;
		Scanner in = new Scanner(System.in);
		T = in.nextInt();
		int[] arr = new int[T];
		for (int i = 0; i < T; i++) {

			arr[i] = in.nextInt();
		}

		for (int i = 0; i < T; i++) {

			N = factorial(arr[i]);
			System.out.println(N);
		}

	}

	static int factorial(int a) {
		int fact = 1;
		if (a == 1 || a == 0) {
			return 1;
		} else {
			for (int i = 1; i <= a; i++) {

				fact = fact * i;
			}
		}
		return fact;
	}

}
