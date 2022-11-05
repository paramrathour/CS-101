#include <simplecpp>

main_program{
    turtleSim();
    int l = 20;
    repeat(30) {
        forward(l); right(144);
        wait(0.5);
        l = l + 15;
    }
    wait(5);
}