import java.util.Scanner;

class Solve {

	int board[][];

	int n;


	Solve(int N) {

		n = N;

		board = new int[n][n];

		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j) board[i][j] = 0;


	}

	public boolean isValid(int i, int j) {

		//Checking Top Portion of Current Column

		for (int row = i - 1; row >= 0; --row) if (board[row][j] == 1) return false;

		//Checking Top Left Diagonal

		for (int row = i - 1, col = j - 1; row >= 0 && col >= 0 ; --row, --col) if (board[row][col] == 1) return false;

		//Checking Top Right Diagonal

		for (int row = i - 1, col = j + 1; row >= 0 && col < n; --row, ++col)  if (board[row][col] == 1) return false;


		return true;

	}

	public void backtrack(int row) {

		if (row == n) {

			for (int i = 0; i < n; ++i) {

				for (int j = 0; j < n; ++j) System.out.print(board[i][j] + " ");

				System.out.println();

			}

			System.out.println("\n" + "......................................... " + "\n");

		}

		else {


			int i = row;

			for (int j = 0; j < n; ++j) {

				if (isValid(i, j)) {

					board[i][j] = 1;

					backtrack(row + 1);

					board[i][j] = 0;

				}


			}

		}

	}

}


public class NQueens {

	public static void main(String[] args) {

		Scanner cin = new Scanner(System.in);

		int n = cin.nextInt();

		Solve obj = new Solve(n);

		obj.backtrack(0);
	}

}
