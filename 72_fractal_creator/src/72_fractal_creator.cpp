//============================================================================
// Name        : 72_fractal_creator.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Bitmap.h"
#include "Mandelbrot.h"
using namespace std;
using namespace ele;

int main() {
	int const WIDTH = 800;
	int const HEIGHT = 600;
	Bitmap bitmap(WIDTH, HEIGHT);
	bitmap.setPixel(WIDTH / 2, HEIGHT / 2, 255, 255, 255);

	int min = 999999;
	int max = -999999;

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			double xFractal = (2.0 * x) / (1.0 * (WIDTH - 1)) - 1;
			double yFractal = (2.0 * y) / (1.0 * (HEIGHT - 1)) - 1;
			int iterations = Mandelbrot::getIterations(xFractal, yFractal);
			uint8_t red = (uint8_t) (255 * (double) iterations
					/ Mandelbrot::MAX_ITERATIONS);
			bitmap.setPixel(x, y, red, red, red);
		}

	}

	bitmap.write("test.bmp");
	cout << "Program finished!" << endl; // prints Hello world!
	return 0;
}
