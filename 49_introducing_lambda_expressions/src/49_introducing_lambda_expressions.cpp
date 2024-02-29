//============================================================================
// Name        : 49_introducing_lambda_expressions.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void test(void (*pFunc)()){
	pFunc();
}

int main() {

	// [](){ cout << "Hello!" << endl;}; // This is a lambda expression
	auto func = [](){ cout << "Hello!" << endl;}; // This is a lambda expression assigned to a variable
	// It's needed to use the auto keyword since the type of the lambda expression can change depending on
	// its implementation.

	func(); // Calling the lambda expression. Acts as a normal function.

	test(func); // Using lambda function as a parameter
	test([](){ cout << "Hello again!" << endl;}); // Using a lambda function not implemented as a parameter

	return 0;
}
