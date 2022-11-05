#include <simplecpp>

main_program {
    cout << fixed;
    cout.precision(8);
    int total_test_cases;
    cin >> total_test_cases;
    repeat (total_test_cases) {
        double k, total = 0;
        cin >> k;
        long long int intk = k;
        double mult = 1, frack = k - intk;
        while (intk != 0) {
            int rem = intk % 2;
            total += rem * mult;
            intk = intk / 2;
            mult *= 10;
        }
        mult = 10;
        for (int i = 1; i <= 8; i++) {
            frack *= 2;
            total += int(frack) / mult;
            frack = frack - int(frack);
            mult *= 10;
        }
        cout << total << endl;
    }
    return 0;
}