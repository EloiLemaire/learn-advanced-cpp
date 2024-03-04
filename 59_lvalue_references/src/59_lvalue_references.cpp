//============================================================================
// Name        : 59_lvalue_references.cpp
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
	// LValues references can be bound to LValues or to RValues if LValue reference was declared as const.
	int value1 = 7;

	// int &rValue1 = 7; Won't compile since 7 is not a LValue
	int &rValue1 = value1; // Works fine since value1 is a LValue
	// int &rValue2 = sum(value1, 3); // Won't compile since LValue reference is not const
	const int &rValue2 = sum(value1, 3); // Works fine since LValue reference is set as const

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
