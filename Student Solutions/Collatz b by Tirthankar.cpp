#include <iostream>

unsigned long long collatz(long long n);

int main() {
	long long n;
	std::cin >> n;

	while (n != -1) {
		std::cout << collatz(n) << std::endl;
		std::cin >> n;
	}
	return 0;
}

unsigned long long collatz(long long n) {
	unsigned long long counter = 0;
	while (n != 1) {
		counter++;
		if (n % 2 == 0) {
			n /= 2;
		} else {
			n = 3 * n + 1;
		}
	}
	return counter;
}
