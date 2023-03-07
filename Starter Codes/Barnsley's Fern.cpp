#include<simplecpp>

main_program{
	int n;
	cin >> n;
	int width = 1920;
	int height = 1080;
	initCanvas("Sierpinski IFS", width, height);
	// double Ax = 3.0 * width / 6, Ay = 5.0 * height / 6 - (sqrt(3) / 2) * 3 * width / 6;
	// double Bx = 1.5 * width / 6, By = 5.0 * height / 6;
	// double Cx = 4.5 * width / 6, Cy = 5.0 * height / 6;
	double Ax = 0, Ay = 0, Bx = 0, By = 1.6, Cx = 0, Cy = 1.6, Dx = 0, Dy = 0.44;
	int temp = getClick();
	double Px = temp % 65536, Py = temp / 65536;
	double P1 = 0.01, P2 = 0.85, P3 = 0.07, P4 = 0.07;
	double scale = 2.5;
	int radius = 1;
	Circle c(scale * 65 * Px + width / 2, 9 * height / 10 - scale * 37 * Py , radius);
	repeat(n) {
		// simulate the chaos game and draw
	}
	getClick();
}