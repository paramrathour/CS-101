#include<simplecpp>

main_program{
    int x, c = 11, d, s = 0;
    char a;

    repeat(10) {
        cin >> a;
        if (a >= '0' && a <= '9')
            x = int(a) - 48;
        else if (a == 'X')
            x = 10;
        c = c - 1;
        if (a == '?') {
            d = c;
            continue;
        }
        s = s + c * x;
    }

    int m = -1;

    while (true) {
        m = m + 1;
        if ((s + d * m) % 11 == 0)
            break;
    }
    if (m == 0 && m == 9)
        cout << m;
    else if (m == 10)
        cout << "X";
}
