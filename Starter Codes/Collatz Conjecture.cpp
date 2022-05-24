#include <simplecpp>

void f(long long &n);
int count_operations(long long n);

main_program {
	long long n;
	cin >> n;
	while (n >= 0) {
		cout << count_operations(n) << "\t";
		cin >> n;
	}
	return 0;
}

void f(long long &n) {
	// update value of n
}

int count_operations(long long n) {
	int count = 0;
	// calculate number of required operations
	return count;
}