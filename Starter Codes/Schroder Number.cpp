// Author: param3435
#include <simplecpp>

int schroder_number(int n);

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	repeat(total_test_cases) {
		int n;
		cin >> n;
		cout << schroder_number(n) << "\n";
	}
	return 0;
}

int schroder_number(int n) {
	// calculate the corresponding schroder number
}