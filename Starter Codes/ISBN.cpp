#include <simplecpp>

main_program {
    int total_test_cases;
    cin >> total_test_cases;
    repeat (total_test_cases) {
        int digit = -1;
        // take the input and calculate the missing digit
        if (digit == 10)
            cout << "X";
        else if (digit >= 0 && digit <= 9)
            cout << digit;
        else
            cout << "No digit found";
        cout << "\n";
    }
}