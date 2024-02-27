/*
 * Complex.cpp
 *
 *  Created on: 26 févr. 2024
 *      Author: eloilemaire
 */

#include "Complex.h"
#include <iostream>
using namespace std;

namespace ele {
Complex::Complex() :
		real(0), imaginary(0) {
}
;
Complex::Complex(double real, double imaginary) :
		real(real), imaginary(imaginary) {
}
;
Complex::Complex(const Complex &other) {
	real = other.real;
	imaginary = other.imaginary;
}
const Complex& Complex::operator=(const Complex &other) {
	real = other.real;
	imaginary = other.imaginary;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Complex &complex) {
	out << complex.real << " + " << complex.imaginary << "j";
	return out;
}

}
/* namespace ele */
