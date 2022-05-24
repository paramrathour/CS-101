// Author: param3435
#include <simplecpp>

const int MAX_n = 100000;

main_program {
	int n;
	cin >> n;
	bool thue_morse[MAX_n] = {0};
	initCanvas("Thue-Morse Sequence", 1920, 1080);
	Turtle t;
	t.penUp();
	t.forward(800);
	t.right(90);
	t.forward(200);
	t.right(-90);
	t.penDown();

	// calculate the sequence and draw the curve
	getClick();
	return 0;
}