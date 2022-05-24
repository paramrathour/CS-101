// Author: param3435
#include <simplecpp>

int dyck_paths(int n);

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int n;
		cin >> n;
		cout << dyck_paths(n) << "\n";
	}
	return 0;
}

int dyck_paths(int n) {
	// calculate the number of dyck paths for a grid of size n,n here
}