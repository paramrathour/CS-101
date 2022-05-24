// Author: param3435
#include <simplecpp>

const int MAX_N = 15;

bool xor_binary(bool a, bool b);

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int n, period = 0;
		cin >> n;
		bool x[MAX_N], t[MAX_N], c[MAX_N];
		for (int i = 0; i < n; ++i) {
			cin >> t[i];
			x[i] = t[i];
		}
		for (int i = 0; i < n; ++i)
			cin >> c[i];
		// generate the sequence and calculate its period.
		cout << "\t" << period << "\n";
	}
}

bool xor_binary(bool a, bool b) { // assumes that a, b are either 0 or 1 and returns a xor b accordingly
	return !(a == b);
}