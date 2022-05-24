// Author: param3435
#include <simplecpp>

int delannoy_number(int m, int n);

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int m, n;
		cin >> m >> n;
		cout << delannoy_number(m, n) << "\n";
	}
	return 0;
}

int delannoy_number(int m, int n) {
	// calculate the number of possible walks for a grid of size m,n here
}