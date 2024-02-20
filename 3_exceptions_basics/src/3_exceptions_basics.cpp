//============================================================================
// Name        : 3_exceptions_basics.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

void mightGoWrong() {
	bool error1 = false;
	bool error2 = false;
	bool error3 = true;

	if (error1) {
		throw 1; // throw (=raise) an error of type int
	}

	if (error2) {
		throw "Error2";
	}

	if (error3) {
		throw string("String error 3");
	}
}

int main() {

	try {
		mightGoWrong();
	} catch (int e) {
		cout << "int error: " << e << endl;
	} catch (char const *e) {
		cout << "Error raised, error code: " << e << endl;
	} catch (string &e) {
		cout << "Error raised, error code: " << e << endl;
	}

	cout << "Program still running!" << endl; // prints Hello world!
	return 0;
}
