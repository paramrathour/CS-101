// Author: param3435
#include <simplecpp>

main_program {
	cout << fixed;
	cout.precision(5);
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int n;
		double x_i, minimum = 101, harmonic = 0, geometric = 1, arithmetic = 0, rms = 0, cubic = 0, maximum = 0;
		cin >> n; // n >= 1
		// take elements as input and update all means
		cout << minimum << "\t" << harmonic << "\t" << geometric << "\t" << arithmetic << "\t" << rms << "\t" << cubic << "\t" << maximum << "\n";
	}
}