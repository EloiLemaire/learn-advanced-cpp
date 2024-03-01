//============================================================================
// Name        : 57_RValues_and_LValues.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// LValues are values that we can address with &
// RValues are temporary values that we can't address

int main() {

	int value1 = 7; // value1 is LValues, 7 is RValues
	int *pTemp = &value1; // Works
	// int *pTemp2 = &7; // Doesn't work

	int value2 = 8;
	int value3 = value2 + value1; // value3 is LValue, (value2 + value1) is RValue
	int *pTemp2 = &value3; // Works
	// int *pTemp3 = (value2 + value1); // Doesn't work

	int value4 = ++value1; // LValue
	int value5 = value1++; // RValue since value1 is temporary in this case
	int *pTemp3 = &++value1;
	// int *pTemp4 = &value1++; // Doesn't work


	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
