// Author: param3435
#include <simplecpp>

const int MAX_n = 10;

int determinant(int A[MAX_n][MAX_n], int n) {
	if (n == 1) {
		return A[0][0];
	}
	int det = 0, sign = 1;
	// laplace expansion
	return det;
}

main_program {
	int total_test_cases = 1;
	cin >> total_test_cases;
	int A[MAX_n][MAX_n];
	for (int i = 0; i < MAX_n; ++i) {
		for (int j = 0; j < MAX_n; ++j) {
			A[i][j] = 0;
		}
	}
	repeat(total_test_cases) {
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				cin >> A[i][j];
			}
		}
		cout << determinant(A, n) << endl;
	}
}