// Author: param3435
#include <simplecpp>

void hilbert(float dist, int n, int parity) { // moves forward drawing a curve to left if parity = 1, right if -1.
    // your code
}

main_program{
    int n;
    cin >> n;
    turtleSim();

    penDown(false); forward(-170); left(90); forward(-170); right(90); penDown(true);
    hilbert(210 / pow(2.1, n), n, 1);

    getClick();
}