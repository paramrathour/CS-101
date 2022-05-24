// Author: param3435
#include <simplecpp>

main_program {
	cout << fixed;
	cout.precision(15);
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int ordinates_num, interval_count;
		cin >> ordinates_num; // ordinates_num >= 3
		interval_count = ordinates_num - 1;
		long double pi = 0;
		// calculate pi here
		cout << pi << "\n";
	}
	return 0;
}