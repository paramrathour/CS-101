// Author: param3435
#include <simplecpp>

main_program {
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int date, month, year, century, year_mod_100;
		char c;
		cin >> date >> c >> month >> c >> year;
		century = year / 100;
		year_mod_100 = year % 100;
		// implement the steps and output the day of the week
		cout << "\n";
	}
	return 0;
}