//============================================================================
// Name        : 52_capturing_this_with_lambda.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test {
private:
	int one { 1 };
	int two { 2 };

public:
	void run() {
		int three { 3 };
		int four { 4 };

		auto pLambda = [three, four, this]() {
			one = 9;
			two = 8;
			// three = 7;
			cout << one << endl;
			cout << two << endl;
			cout << three << endl;
			cout << four << endl;
		};
		// Capturing variables from private can be done only with the this keyword or by setting a default behavior : =/&.
		// Then private variables are capture as reference whatever this/=/& is provided.

		cout << "one: " << one << endl;

		pLambda();
	}
};

int main() {
	Test test;
	test.run();
	return 0;
}
