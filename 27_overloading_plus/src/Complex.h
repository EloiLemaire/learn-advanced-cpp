/*
 * Complex.h
 *
 *  Created on: 26 févr. 2024
 *      Author: eloilemaire
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>

namespace ele {

class Complex {
private:
	double real;
	double imaginary;

public:
	Complex();
	Complex(double real, double imaginary);
	Complex(const Complex &other);
	virtual ~Complex(){};
	const Complex &operator=(const Complex &other);

	friend std::ostream &operator<<(std::ostream &out, const Complex &complex);
	friend Complex operator+(const Complex &c1, const Complex &c2);
};

} /* namespace ele */

#endif /* COMPLEX_H_ */
