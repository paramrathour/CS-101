// Author:  param3435
// https://stackoverflow.com/questions/12775920/reading-line-of-integers-into-a-vector
// https://stackoverflow.com/questions/19094283/quicksort-and-tail-recursive-optimization
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int Partition(vector<int> &numbers, int p, int r) {
	// partitioning logic
}

void Quicksort(vector<int> &numbers, int p, int r) {
	while (p < r) {
		int q = Partition(numbers, p, r);
		// quicksort logic
	}
}

void printVector(vector<int> &numbers, int n) {
	for (int i = 0; i < n; ++i)
		cout << numbers[i] << " ";
	cout << "\n";
}

int main() {
	int t;
	cin >> t;
	int n, num;
	string line;
	getline(cin, line);
	for (int i = 0; i < t; ++i) {
		vector<int> numbers;
		getline(cin, line);
		istringstream iss(line);
		while (iss >> num)
			numbers.push_back(num);
		n = numbers.size();
		Quicksort(numbers, 0, n - 1);
		printVector(numbers, n);
	}
	return 0;
}