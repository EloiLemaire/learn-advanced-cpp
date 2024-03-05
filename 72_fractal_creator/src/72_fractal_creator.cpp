//============================================================================
// Name        : 72_fractal_creator.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Bitmap.h"
using namespace std;
using namespace ele;

int main() {
	int const WIDTH = 800;
	int const HEIGHT = 600;
	Bitmap bitmap(WIDTH, HEIGHT);
	bitmap.setPixel(WIDTH / 2, HEIGHT / 2, 255, 255, 255);

	int x_min = 999999;
	int x_max = -999999;
	int y_min = 999999;
	int y_max = -999999;

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			double xFractal = (2.0 * x) / (1.0 * (WIDTH - 1)) - 1;
			double yFractal = (2.0 * x) / (1.0 * (HEIGHT - 1)) - 1;

			if (xFractal > x_max) x_max = xFractal;
			if (xFractal < x_min) x_min = xFractal;
			if (yFractal > y_max) y_max = yFractal;
			if (yFractal < y_min) y_min = yFractal;
		}
	}

	cout << "x_max: " << x_max << endl;
	cout << "x_min: " << x_min << endl;
	cout << "y_max: " << y_max << endl;
	cout << "y_min: " << y_min << endl;



	bitmap.write("test.bmp");
	cout << "Program finished!" << endl; // prints Hello world!
	return 0;
}
