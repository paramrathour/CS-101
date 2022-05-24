// Author: param3435
#include <simplecpp>

main_program {
	cout << fixed;
	cout.precision(4);
	int total_test_cases;
	cin >> total_test_cases;
	repeat (total_test_cases) {
		int hours, minutes, seconds;
		char c;
		cin >> hours >> c >> minutes >> c >> seconds; // n >= 1
		double angle_hour, angle_minute, angle_second, angle_hm, angle_hs, angle_ms;
		// calculate the angles here
		cout << angle_hm << "\t" << angle_hs << "\t" << angle_ms << "\n";
	}
	return 0;
}