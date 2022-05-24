// Author: param3435
#include <simplecpp>

int staircase_walks(int m, int n);

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	repeat(total_test_cases) {
		int m, n;
		cin >> m >> n;
		cout << staircase_walks(m, n) << "\n";
	}
	return 0;
}

int staircase_walks(int m, int n) {
	// calculate the number of staircase walks for a grid of size m,n here
}