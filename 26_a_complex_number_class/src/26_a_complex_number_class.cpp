//============================================================================
// Name        : 26_a_complex_number_class.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"
using namespace std;
using namespace ele;

int main() {

	Complex complex1(1, 2);
	Complex complex2 = complex1;
	Complex complex3;

	cout << complex1 << endl;
	cout << complex2 << endl;
	cout << complex3 << endl;

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
