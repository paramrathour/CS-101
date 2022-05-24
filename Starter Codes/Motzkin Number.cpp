// Author: param3435
#include <simplecpp>

int motzkin_number(int n);

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	repeat(total_test_cases) {
		int n;
		cin >> n;
		cout << motzkin_number(n) << "\n";
	}
	return 0;
}

int motzkin_number(int n) {
	// calculate the corresponding motzkin number
}