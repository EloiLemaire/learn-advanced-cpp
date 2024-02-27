//============================================================================
// Name        : 34_function_pointers.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int sum(int a, int b){
	return a + b;
}

int main() {
	int c1 = sum(4, 5);
	cout << c1 << endl;

	int (*pSum)(int, int) = sum; // Declare and set function.
	int c2 = pSum(2, 3);
	cout << c2 << endl;

	int (*pSum2)(int, int); // Declare function inputs and output
	pSum2 = sum; // Set functions pointers
	int c3 = pSum2(1, 3);
	cout << c3 << endl;

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
