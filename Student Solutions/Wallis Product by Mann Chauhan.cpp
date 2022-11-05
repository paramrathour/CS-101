#include <simplecpp>

main_program {
	cout << fixed;
	cout.precision(10);
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int n;
		cin >> n;
		double pi = 1, i = 1;
		repeat(n) {
			pi *= ((2 * i) / (2 * i - 1)) * ((2 * i) / (2 * i + 1));
			i++;
		}
		pi = pi * 2;
		cout << pi << "\n";
	}
	return 0;
}