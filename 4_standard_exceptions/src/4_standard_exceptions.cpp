//============================================================================
// Name        : 4_standard_exceptions.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class CanGoWrong {
public:
	CanGoWrong() {
		char *p_memory = new char[9999999999999999];
		delete[] p_memory;
	}
};

int main() {
	try {
		CanGoWrong();
	} catch (bad_alloc &e) {
		cout << "Error: " << e.what() << endl;
	}

	cout << "Program still running!" << endl; // prints Hello world!
	return 0;
}
