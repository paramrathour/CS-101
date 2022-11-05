#include <simplecpp>

long int f(const int &x, int a, int b);

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	for (int i = 0; i < total_test_cases; i++) {
		int x, n;
		cin >> x >> n;
		cout << f(x, 0, n) << endl;
	}
	return 0;
}

long int f(const int &x, int a, int b) {
	long int result = 0;
	int ai = 0;
	cin >> ai;
	if (a == b) {
		return ai;
	} else {
		result += ai + (x * f(x, a + 1, b));
		return result;
	}
}