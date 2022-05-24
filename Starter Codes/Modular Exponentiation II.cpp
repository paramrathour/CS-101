// Author: param3435
#include <simplecpp>

int mod_exp(int x, int y, int k);
int mod_super_exp(int x, int y, int z, int k);

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int x, y, z, k = 1000000007;
		cin >> x >> y >> z;
		cout << mod_super_exp(x, y, z, k) << "\n";
	}
	return 0;
}

int mod_exp(int x, int y, int k) {
	// return x^y % k
}

int mod_super_exp(int x, int y, int z, int k) {
	// return x^y^z % k
}