#include <simplecpp>

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int n;
		cin >> n;
		int i = 0;
		repeat (n + 1) {
			int val = 1, k = 0, sum = 0;
			repeat(i + 1) {
				sum += val;
				cout << sum << " ";
				val = val * (i - k) / (k + 1);
				k++;
			}
			i++;
			cout << "\n";
		}
		cout << "\n";
	}
	return 0;
}