//============================================================================
// Name        : 62_move_assignment_operators.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;

class Test {
private:
	int *_pBuffer{nullptr};
	const int SIZE = 10;

public:
	Test() {
		cout << "No parameter constructor called" << endl;
		_pBuffer = new int[SIZE] { 0 };
	}

	Test(int factor) {
		cout << "Parameterized constructor called" << endl;
		_pBuffer = new int[SIZE] { 0 };
		for (int i = 0; i < SIZE; i++) {
			_pBuffer[i] = i * factor;
		}
	}

	Test(const Test &other) {
		cout << "Copy constructor called" << endl;
		_pBuffer = new int[SIZE] { 0 };
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
	}

	Test(Test &&other) {
		cout << "Move constructor called" << endl;
		_pBuffer = other._pBuffer;
		other._pBuffer = nullptr;
	}


	Test &operator=(const Test &other) {
		cout << "Assignment constructor called" << endl;
		_pBuffer = new int[SIZE] { 0 };
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
		return *this;
	}

	Test &operator=(Test &&other){ // Move assignment operator (take a Test &&other = RValue reference) as arg.
		// 1. Delete receiving resources, 2. Assign resources, 3. Delete giving resources. 4. Return *this
		cout << "Move assignment called." << endl;

		delete [] _pBuffer;
		_pBuffer = other._pBuffer;
		other._pBuffer = nullptr;
		return *this;
	}

	friend std::ostream& operator<<(std::ostream &out, const Test &test);

	~Test() {
		cout << "Destructor called" << endl;
		delete [] _pBuffer;
	}

};

std::ostream& operator<<(std::ostream &out, const Test &test) {
	for (int i = 0; i < test.SIZE; i++) {
		out << test._pBuffer[i] << ",  " << flush;
	}
	return out;
}

Test getTest(){
	return Test();
}

int main() {
	Test test; // "No parameter constructor called"
	cout << test << endl;

	Test test1(2); // "Parameterized constructor called"
	cout << test1 << endl;

	Test test2 = test1; // "Copy constructor called"
	cout << test2 << endl;

	Test test3;
	test3 = test1; // "Assignment constructor called"
	cout << test3 << endl;

	Test test4(static_cast<Test &&>(test1)); // "Move constructor called"
	cout << test4 << endl;

	return 0;
}
