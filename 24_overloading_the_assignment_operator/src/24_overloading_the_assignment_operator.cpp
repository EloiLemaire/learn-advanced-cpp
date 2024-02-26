//============================================================================
// Name        : 24_overloading_the_assignment_operator.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test {
private:
	int id;
	string name;

public:
	Test() :
			id(0), name("") {
	}
	;
	Test(int id, string name) :
			id(id), name(name) {
	}
	;
	void print() {
		cout << id << " – " << name << endl;
	}
	const Test &operator=(const Test &other) { // referencing the function (&) ensures that we don't call the copy constructor/
											   // destructor. We make a copy in place.
		cout << "Assignment running" << endl;
		id = other.id + 1;
		name = other.name;
		return *this; // This instruction is required for chained assignment: test3 = test2 = test1;
	}

	Test(const Test &other){
		cout << "Copy constructor running" << endl;
		//id = other.id + 1;
		//name = other.name;
		*this = other;
	}

	~Test(){
		cout << "Destructor running" << endl;
	}
};

int main() {
	Test test(0, "Eloi");
	test.print();

	Test test1 = test; // Copy constructor is called

	//Test test1;
	cout << endl;
	// test1 = test; // Assignment operator is called
	cout << endl;
	//test1.operator=(test);


	test1.print();

	//cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
