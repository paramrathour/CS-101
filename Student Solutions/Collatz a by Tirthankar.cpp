#include <iostream>

void collatz(long long n);

int main() {
	long long n;
	std::cin >> n;
	collatz(n);
	return 0;
}

void collatz(long long n) {
	while (n != 1) {
		std::cout << n << " ";
		if (n % 2 == 0) {
			n /= 2;
		} else {
			n = 3 * n + 1;
		}
	}
	std::cout << 1;
}