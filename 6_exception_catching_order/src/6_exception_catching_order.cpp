//============================================================================
// Name        : 6_exception_catching_order.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Since some exceptions (for instance bad_alloc) inherit from
// the super-class exception, it's important to check that the order of the
// catching is right. Otherwise the behavior may not be the one expected.
//============================================================================

#include <iostream>
#include <exception>
using namespace std;

void mayGoWrong() {
	bool errorDetected1 = false;
	bool errorDetected2 = true;

	if (errorDetected1)
		throw bad_alloc(); // Careful to use exception() (with parenthesis)
	if (errorDetected2)
		throw exception();
}

int main() {

	try {
		mayGoWrong();
	} catch (bad_alloc &e) {
		cout << "Bad alloc caught: " << e.what() << endl;
	} catch (exception &e) {
		cout << "Exception caught: " << e.what() << endl;
	}

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
