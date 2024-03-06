/*
 * Mandelbrot.cpp
 *
 *  Created on: 5 mars 2024
 *      Author: eloilemaire
 */

#include "Mandelbrot.h"
#include <cstdint>
#include <complex>

using namespace std;

namespace ele {

int Mandelbrot::getIterations(double x, double y) {
	complex<double> z = 0;
	complex<double> c(x, y);
	int iterations = 0;
	while (iterations < MAX_ITERATIONS) {
		z = z * z + c;

		if (abs(z) > 2) {
			break;
		}
		iterations++;
	}
	return iterations;
}

uint8_t* Mandelbrot::iterations2Colors(int iterations) {
	uint8_t colors[3];
	iterations = (uint8_t) iterations;
	colors[0] = iterations;
	colors[1] = iterations;
	colors[2] = 255 - iterations;
	return colors;
}

Mandelbrot::Mandelbrot() {
	// TODO Auto-generated constructor stub

}

Mandelbrot::~Mandelbrot() {
	// TODO Auto-generated destructor stub
}

} /* namespace ele */
