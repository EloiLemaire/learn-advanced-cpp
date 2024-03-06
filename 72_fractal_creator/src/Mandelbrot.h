/*
 * Mandelbrot.h
 *
 *  Created on: 5 mars 2024
 *      Author: eloilemaire
 */

#ifndef MANDELBROT_H_
#define MANDELBROT_H_
#include <cstdint>

namespace ele {

class Mandelbrot {
public:
	static const int MAX_ITERATIONS = 1000;

public:
	static int getIterations(double xFractal, double yFractal);
	static uint8_t * iterations2Colors(int iterations);
	Mandelbrot();
	virtual ~Mandelbrot();
};

} /* namespace ele */

#endif /* MANDELBROT_H_ */
