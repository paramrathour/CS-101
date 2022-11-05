#include <simplecpp>

main_program {
    cout << fixed;
    cout.precision(8);
    int total_test_cases;
    cin >> total_test_cases;
    repeat (total_test_cases) {
        double k;
        cin >> k;
        double total = 0;
        long long int intk = k, mult = 1;
        double frack = k - intk;
        while (intk != 0) {
            long long int d = intk % 10;
            total += d * mult;
            intk = intk / 10;
            mult *= 2;
        }
        for (int i = 1; i <= 8; i++) {
            frack *= 10;
            int digit = round(frack);
            total += digit / pow(2, i);
            frack -= digit;
        }
        cout << total << endl;
    }
    return 0;
}