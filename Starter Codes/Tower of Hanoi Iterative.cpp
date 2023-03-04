// Author:  param3435
#include <iostream>
using namespace std;

const int MAX_n = 20

void hanoi(int n) {
	int positions[MAX_n] = {0};					// Location of rod where i+1th disk is.	0 for A, 1 for B, 2 for C.
	// All disks at rod A initially
	int topDisks[3] = {1, MAX_n, MAX_n};	 			// Maintains topDisks at eack rod
	// write iterative program here
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n;
		cin >> n;
		hanoi(n);
		cout << "\n";
	}
	return 0;
}