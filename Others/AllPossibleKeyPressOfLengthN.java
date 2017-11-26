/*
* @Author: kg
* @Date:   2017-11-24 20:49:31
* @Last Modified by:   kg
* @Last Modified time: 2017-11-24 20:51:14
*/
import java.io.*;
import java.util.*;

public class AllPossibleKeyPressOfLengthN{

	static int[][] a = {
		{0},
		{1, 2, 4},
		{1, 2, 3, 5},
		{2, 3, 6},
		{1, 4, 5, 7},
		{2, 4, 5, 6, 8},
		{3, 5, 6, 9},
		{4, 7, 8},
		{5, 7, 8, 9, 10},
		{6, 8, 9},
		{8, 10}
	};
	static int dp[][] = new int[11][];

	static int compute(int val, int rem) {
		if (rem == 0) return 1;
		int s = 0;
		if (dp[val][rem] != -1) return dp[val][rem];
		for (int i : a[val]) {
			s += compute(i, rem - 1);
		}
		dp[val][rem] = s;
		return s;
	}

	public static int combinationCounts(int n) {
		for (int i = 0; i < 11; ++i) {
			dp[i] = new int[n];
			Arrays.fill(dp[i], -1);
		}
		int s = 0;
		for (int i = 1; i < 11; ++i) {
			s += compute(i, n - 1);
		}
		return s;
	}

	public static void main(String[] args) throws IOException {
		Scanner in = new Scanner(System.in);
		int output = 0;
		int ip1 = Integer.parseInt(in.nextLine().trim());
		output = combinationCounts(ip1);
		System.out.println(String.valueOf(output));
	}
}