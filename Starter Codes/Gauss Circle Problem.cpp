// Author: param3435
#include <simplecpp>

int X(int n);
int count_lattice_points(int n);

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int n, sum = 0, max_norm;
		cin >> n;
		max_norm = n * n;
		for (int i = 0; i <= max_norm; ++i) {
			sum += count_lattice_points(i);
		}
		cout << sum << " ";
	}
	return 0;
}

int X(int n) {
	// calculate X(n)
}

int count_lattice_points(int n) {
	int sum = 0;
	// calculate sum of X(i) for each factor i of n
	return 4 * sum;
}