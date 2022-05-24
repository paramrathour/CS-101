// Author: param3435
#include <simplecpp>

int mod_exp(int x, int y, int k);

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int x, y, k = 1000000007;
		cin >> x >> y;
		cout << mod_exp(x, y, k) << "\n";
	}
	return 0;
}

int mod_exp(int x, int y, int k) {
	return // x^y % k
}