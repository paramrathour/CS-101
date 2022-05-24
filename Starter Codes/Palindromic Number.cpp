// Author: param3435
#include <simplecpp>

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int n;
		cin >> n;
		int reverse_num = 0, num = n;
		// calculate the reverse of num and store it in reverse_num
		cout << ((reverse_num == num) ? "yes" : "no") << "\n";
	}
	return 0;
}