#include <iostream>

//Using the ideas discussed with my TA (Param Rathour)
//(I was unable to come up with the solution myself)

using namespace std;

int main() {
	int num;

	cin >> num;

	for (int i = 0; i < num; i++) {
		unsigned int n, max_element = 1, max_index = 1;
		cin >> n;

		for (unsigned int i = 2; i <= n; ++i) {
			unsigned long int f_prev = 0, f_curr = 1, f_next = 1;
			unsigned int counter = 1;

			while (f_curr != 0 || f_next != 1) {
				//The key idea is that when the two numbers become 0 and 1,
				//the entire sequence restarts
				f_prev = f_curr;
				f_curr = f_next % i;
				f_next = (f_prev + f_curr) % i;
				counter++;
			}
			if (max_element < counter) {
				max_element = counter;
				max_index = i;
			}
		}
		cout << max_index << " " << max_element << endl;
	}
}