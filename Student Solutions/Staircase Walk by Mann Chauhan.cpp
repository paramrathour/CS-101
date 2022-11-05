#include <simplecpp>

int staircase_walks(int m, int n) {
	double a = m, b = n;
	if (a == 0 || b == 0) {
		return 1;
	}
	int result = ((a + b) * (a + b - 1) / (a * b)) * staircase_walks(a - 1, b - 1);
	return result;
}

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	repeat(total_test_cases) {
		int m, n;
		cin >> m >> n;
		cout << staircase_walks(m, n) << endl;
	}
}