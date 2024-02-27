//============================================================================
// Name        : 28_overloading_equality_test.cpp
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
	Complex c2(2, 1);

	if (c1 != c2){
		cout << "Not equal" << endl;
	} else{
		cout << "Equal" << endl;
	}

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
