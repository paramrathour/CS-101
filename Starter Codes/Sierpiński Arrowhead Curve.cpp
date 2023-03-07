// Author: param3435
#include<simplecpp>

void drawSierpinkski(Turtle &t, double step_size, int iterations, char type, int angle) {
	// implement the L-system and draw
}

main_program{
	int n;
	cin >> n;
	int width = 1920;
	int height = 1080;
	initCanvas("Sierpinski Arrowhead Curve", width, height);
	Turtle t;
	t.penUp();
	t.forward(-width / 3);
	t.left(90);
	t.forward(-height / 3);
	t.left(-90);
	t.penDown();
	drawSierpinkski(t, 1000.0 / (1 << n), n, 'A', 60);
	getClick();
}