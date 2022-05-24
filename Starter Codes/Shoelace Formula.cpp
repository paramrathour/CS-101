// Author: param3435
#include <simplecpp>

main_program {
	cout << fixed;
	cout.precision(1);
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int n, area = 0;
		cin >> n; // n >= 3
		// Calculate the numerator; i.e. 2*area here;
		cout << abs(area / 2.0) << "\n";
	}
	return 0;
}