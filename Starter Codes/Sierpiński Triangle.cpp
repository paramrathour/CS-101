// Author: param3435
#include<simplecpp>

main_program{
	int n;
	cin >> n;
	int width = 1920;
	int height = 1080;
	initCanvas("Sierpinski IFS", width, height);
	double Ax = 3.0 * width / 6, Ay = 5.0 * height / 6 - (sqrt(3) / 2) * 3 * width / 6;
	double Bx = 1.5 * width / 6, By = 5.0 * height / 6;
	double Cx = 4.5 * width / 6, Cy = 5.0 * height / 6;
	int temp = getClick();
	double Px = temp % 65536, Py = temp / 65536;
	int radius = 1;
	Circle c(Px, Py, radius);
	repeat(n) {
		// simulate the chaos game and draw
	}
	getClick();
}