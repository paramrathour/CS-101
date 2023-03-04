// Author: param3435
#include <simplecpp>

const int MAX_n = 20;

void interpolate(double differences[], double coefficients[], int n);
double ith_element(double coefficients[], int n, double x);
void print_polynomial(double coefficients[], int n);

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	repeat(total_test_cases) {
		int n;
		cin >> n;
		double differences[MAX_n] = {0}, coefficients[MAX_n] = {0};
		for (int i = 0; i < n; i++) {
			cin >> differences[i];
		}
		interpolate(differences, coefficients, n);
		cout << ith_element(coefficients, n, n) << "\t";
		print_polynomial(coefficients, n);
	}
}

void interpolate(double differences[], double coefficients[], int n) {
	// interpolate
}

double ith_element(double coefficients[], int n, double x) {
	// find ith element using the interpolated coefficients
}

void print_polynomial(double coefficients[], int n) {
	// print polynomial in required frm
}