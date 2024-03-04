//============================================================================
// Name        : 60_rvalue_references.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void check(const int &rValue) {
	cout << "LValue reference received!" << endl;
}

void check(int &&rValue) {
	cout << "RValue reference received!" << endl;
}

int main() {
	int value1 = 7;

	int &&rValue1 = 7; // Works fine since &&rValue1 is a RValue reference and 7 is a RValue.
	// RValue references are usually used not as const to be fully operable.

	check(value1); // LValue called
	check(7); // RValue called
	check(rValue1); // LValue called
	check(value1++); // RValue called

	return 0;
}
