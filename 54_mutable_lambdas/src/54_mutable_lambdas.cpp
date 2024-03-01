//============================================================================
// Name        : 54_mutable_lambdas.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int value{5};

	[value]() mutable{ // mutable allows one to edit a variable captured as value INSIDE of the lambda expression's scope
		value = 8;
		cout << value << endl;
	}();

	cout << value << endl; // the lambda expression doesn't infringe on the raw value

	return 0;
}
