#include <simplecpp>

long long gcd(long long m, int n) {
    if (n == 0) {
        return m;
    } else {
        return gcd(n, m % n);
    }
}

long long sum_of_divisors(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        if ((n % i) == 0) {
            sum += i;
        }
    }
    return sum;
}

void friendly_pair_check(int a, int b) {
    long long sa = sum_of_divisors(a);
    long long sb = sum_of_divisors(b);
    long long hcfa = gcd(sa, a);
    long long hcfb = gcd(sb, b);
    if ((sa / hcfa == sb / hcfb) && (a / hcfa == b / hcfb)) {
        if ((a / hcfa) == 1) {
            cout << (sa / a) << endl;
        } else {
            cout << (sa / hcfa) << "/" << (a / hcfa) << endl;
        }
    } else {
        cout << -1 << endl;
    }
}

main_program{
    int t;
    cin >> t;
    repeat(t) {
        int a, b;
        cin >> a >> b;
        friendly_pair_check(a, b);
    }
}