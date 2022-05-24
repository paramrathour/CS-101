// Author: param3435
#include <simplecpp>
const int MAX_n = 10000;

main_program {
	int n;
	cin >> n;
	int van_eck[MAX_n + 1] = {0};
	// calculate the terms here
	for (int i = 0; i < n + 1; ++i)
		cout << van_eck[i] << " ";
	return 0;
}