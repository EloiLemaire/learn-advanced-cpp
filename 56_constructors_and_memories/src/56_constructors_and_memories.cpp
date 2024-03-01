//============================================================================
// Name        : 56_constructors_and_memories.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
using namespace std;

class Test {
private:
	const static int SIZE = 100;
	int *_pBuffer;

public:
	Test() {
		cout << "Np-parameter constructor called" << endl;
		_pBuffer = new int[SIZE] { }; // Set every byte to 0;
	}

	Test(int value) {
		cout << "int-parameter constructor called" << endl;
		_pBuffer = new int[SIZE] { };

		for (int i = 0; i < SIZE; i++) {
			_pBuffer[i] = value * i;
		}
	}

	Test(const Test &other) {
		cout << "Copy constructor called" << endl;
		_pBuffer = new int[SIZE] { };
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
		// copy other._pBuffer in _pBuffer (follows = assignation order)
	}

	Test operator=(const Test &other) {
		cout << "Assignement called" << endl;
		return *this;
	}

	virtual ~Test() {
		cout << "Destructor called" << endl;
		delete[] _pBuffer;
	}
};

int main() {

	return 0;
}
