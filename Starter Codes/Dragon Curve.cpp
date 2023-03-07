// Author: param3435
#include<simplecpp>

void drawDragon(Turtle &t, double step_size, int iterations, char type, int angle) {
	// implement the L-system and draw
}

main_program{
	int n;
	cin >> n;
	int width = 1920;
	int height = 1080;
	initCanvas("Dragon Curve", width, height);
	Turtle t;
	drawDragon(t, 10000.0 / pow(n, 2 * sqrt(2)), n, 'F', 90);
	getClick();
}