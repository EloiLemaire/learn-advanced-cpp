//============================================================================
// Name        : 51_lambda_capture_expressions.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int one = 1;
	int two = 2;
	int three = 3;

	[one](){ cout << one << endl;}(); // Lambda expressions can capture variable outside from their scope (their
	// scope is independant)

	[one](){ cout << one << endl;
	/*one = 2; Won't work since one is captured as value only*/}(); // Capture value only -> can't override value

	[&one](){ one = 7; cout << one << endl;}();
	cout << one << endl;

	[=](){cout << one << endl;}(); // captures every variables as values

	[=, &one](){one = 9; cout << two << endl;}(); // captures every variables as value but one as reference
	cout << one << endl;

	[two, &one](){one = 10; cout << two << endl;}(); // captures two as value and one as reference
	cout << one << endl;

	[&, two](){one = 11; cout << two << endl;}(); // captures every variables as reference but two as value
		cout << one << endl;



	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
