#include <simplecpp>

main_program {
	cout << fixed;
	cout.precision(15);
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int n;
		cin >> n;
		long double pi = 1, radical = 0, value = 1;
		repeat(n) {
			int i = 1;
			repeat(i) {
				radical = sqrt(2 + radical);
			}
			value *= radical / 2.0;
			i++;
		}
		pi = 2.0 / value;
		cout << pi << "\n";
	}
	return 0;
}