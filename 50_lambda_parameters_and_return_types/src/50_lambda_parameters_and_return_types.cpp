//============================================================================
// Name        : 50_lambda_parameters_and_return_types.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double testDivide(double (*pFunc)(double a1, double a2)){
	return pFunc(10, 3);
}

int main() {
	auto pGreet = [](string name) {
		cout << "Hello " << name << "!" << endl;
	};
	pGreet("Eloi");

	auto pGreetStr = [](string name) {
		string text = "Hello " + name + "!";
		return text;
	};

	auto Divide = [](double a, double b) -> double { // It's necessary to add the trail return type in case there are
		// several return instructions. Especially if every return types are different.
		if (b == 0) {
			return 0;
		}
		return a / b;
	};

	cout << Divide(10.0, 0) << endl;
	cout << pGreetStr("Eloi Lemaire") << endl;

	cout << testDivide(Divide) << endl;
	return 0;
}
