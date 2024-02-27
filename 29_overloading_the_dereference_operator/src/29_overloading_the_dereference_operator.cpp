//============================================================================
// Name        : 29_overloading_the_dereference_operator.cpp
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

	Complex c1(1, 2);
	cout << c1 << endl;
	cout << *c1 << endl;


	return 0;
}
