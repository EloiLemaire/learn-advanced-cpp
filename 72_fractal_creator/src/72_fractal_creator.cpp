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

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			bitmap.setPixel(x, y, 255, 0, 0);
		}
	}

	bitmap.write("test.bmp");
	cout << "Program finished!" << endl; // prints Hello world!
	return 0;
}
