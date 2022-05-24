// Author: param3435
#include <simplecpp>

int f(const int &x, int a, int b);

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int x, n;
		cin >> x >> n;
		cout << f(x, 0, n) << "\n";
	}
	return 0;
}

int f(const int &x, int a, int b) {
	// calculate f(x) recursively using Horner's Method ONLY
}