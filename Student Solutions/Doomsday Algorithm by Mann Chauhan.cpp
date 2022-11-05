#include <simplecpp>

main_program {
    int total_test_cases;
    cin >> total_test_cases;
    repeat (total_test_cases) {
        int date, month, year, century, year_mod_100, dday = 0;
        char c;
        cin >> date >> c >> month >> c >> year;
        century = year / 100;
        year_mod_100 = year % 100;
        if ((month % 2 == 0 && month < 7 && date > 30) || (month % 2 != 0 && month > 7 && date > 30) || (month == 2 && year % 400 != 0 && date == 29)) {
            cout << "INVALID DATE!";
        } else {
            if ((century % 4) == 1) {
                dday = 0;
            } else if ((century % 4) == 2) {
                dday = 5;
            } else if ((century % 4) == 3) {
                dday = 3;
            } else {
                dday = 2;
            }

            dday += year_mod_100 % 28; // no of years after multiples of 28 removed
            for (int i = ((year_mod_100 / 28) * 28) % 28; i <= (year_mod_100) % 28; i++) {
                if (i != 0 && i % 4 == 0) {
                    dday++; // for leap years
                }
            }

            // FOR MONTHS
            if (month == 1) {
                if (year % 4 == 0) {
                    dday += date - 4;
                } else {
                    dday += date - 3;
                }
            } else if (month == 2) {
                if (year % 4 == 0) {
                    dday -= (29 - date);
                } else {
                    dday -= (28 - date);
                }
            } else if (month == 3) {
                dday += date - 14;
            } else if (month == 4) {
                dday += date - 4;
            } else if (month == 5) {
                dday += date + 26;
            } else if (month == 6) {
                dday += date - 6;
            } else if (month == 7) {
                dday += date + 24;
            } else if (month == 8) {
                dday += date - 8;
            } else if (month == 9) {
                dday += date + 23;
            } else if (month == 10) {
                dday += date - 10;
            } else if (month == 11) {
                dday += date + 21;
            } else {
                dday += date - 12;
            }
            dday = dday % 7;
            if (dday < 0) {
                dday += 7;
            }
            cout << dday << endl;
            if (dday == 0) {
                cout << "Sunday";
            } else if (dday == 1) {
                cout << "Monday";
            } else if (dday == 2) {
                cout << "Tuesday";
            } else if (dday == 3) {
                cout << "Wednesday";
            } else if (dday == 4) {
                cout << "Thursday";
            } else if (dday == 5) {
                cout << "Friday";
            } else {
                cout << "Saturday";
            }

            cout << "\n";
        }
    }
    return 0;
}