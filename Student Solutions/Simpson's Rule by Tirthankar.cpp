#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Problem 2.10 from the Extra Problems PDF
//Link: https://paramrathour.github.io/CS-101/Problems.pdf

long double f(long double x);

int main() {
	int total_test_cases;
	cin >> total_test_cases;
	for (int test_cases = 0; test_cases < total_test_cases; test_cases++) {
		unsigned int n; //Number of points to take
		cin >> n;
		long double a, b; //a = lower bound, b = upper bound
		a = 0;
		b = 1;
		n -= 1;

		long double step = (b - a) / n; //Stores the step size, which
		//depends on the value of n

		long double ans = 0;

		for (int i = 0; i <= n; i++) {
			long double x = a + i * step;
			if (i == 0 || i == n) {
				ans += f(x);
			} else if (i % 2 == 0) {
				ans += 2 * f(x);
			} else {
				ans += 4 * f(x);
			}
		}

		ans *= step / 3;

		cout << fixed << setprecision(15) << (long double) 22 / 7 - ans << endl;
	}
}

long double f(long double x) {
	return pow(x, 4) * pow(1 - x, 4) / (1 + pow(x, 2));
}