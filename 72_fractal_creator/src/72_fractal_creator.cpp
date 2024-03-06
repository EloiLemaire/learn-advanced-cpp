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

	unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS + 1]{0});

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			double xFractal = (x - WIDTH/2.0 - 200) * 2.0 / WIDTH;
			double yFractal = (y - HEIGHT/2.0) * 2.0 / HEIGHT;
			int iterations = Mandelbrot::getIterations(xFractal, yFractal);

			histogram[iterations]++;

			uint8_t color = (uint8_t) (256 * (double) iterations
					/ Mandelbrot::MAX_ITERATIONS);
			color = color * color * color;
			bitmap.setPixel(x, y, 0, color, 0);
		}

	}

	bitmap.write("test.bmp");

	for (int i = 0; i < Mandelbrot::MAX_ITERATIONS + 1; i ++){
		cout << histogram[i] << endl;
	}

	cout << "Program finished!" << endl; // prints Hello world!
	return 0;
}
