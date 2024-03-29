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

Complex operator+(const Complex &c1, const Complex &c2) {
	return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}

bool Complex::operator==(const Complex &other) const {
	return real == other.real && imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex &other) const{
	return !(*this==other);
}

Complex Complex::operator*() const{
	return Complex(real, -imaginary);
}

double Complex::operator[](const int index) const{
	if (index == 0){
		return real;
	}
	if (index == 1){
		return imaginary;
	}
	else{
		throw string("Index not allowed.");
	}
}

}
/* namespace ele */
