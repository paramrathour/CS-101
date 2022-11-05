#include <simplecpp>

main_program {
    int total_test_cases;
    cin >> total_test_cases;
    repeat (total_test_cases) {
        int sum = 0, val = 0;
        for (int i = 10; i >= 1; i--) {
            char ch = ' ';
            int num = 0;
            cin >> ch;
            if (ch == 'X') {
                num = 10;
                sum += i * num;
            } else if (ch == '?') {
                val = i;
            } else {
                num = int(ch) - 48;
                sum += i * num;
            }
        }
        for (int i = 0; i < 11; i++) {
            if ((sum + val * i) % 11 == 0) {
                if (i == 10) {
                    cout << "X" << endl;
                } else {
                    cout << i << endl;
                }
            }
        }
    }
}