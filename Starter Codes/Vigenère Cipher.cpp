// Author:  param3435
#include <iostream>
using namespace std;

const int MAX_k = 1000;
const int MAX_p = 1000;

int main() {
	int total_test_cases;
	cin >> total_test_cases;
	char key[MAX_k], plaintext[MAX_p], ciphertext[MAX_p];
	for (int test_cases = 0; test_cases < total_test_cases; ++test_cases) {
		int k, p;
		cin >> k >> p;
		for (int i = 0; i < k; ++i) {
			cin >> key[i];
		}
		for (int i = 0; i < p; ++i) {
			cin >> plaintext[i];
		}
		// Encryption
		cout << "\n";
		// Decryption
		cout << endl;
	}
	return 0;
}