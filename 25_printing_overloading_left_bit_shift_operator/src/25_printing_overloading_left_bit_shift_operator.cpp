//============================================================================
// Name        : 25_printing_overloading_left_bit_shift_operator.cpp
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
		cout << id << ": " << name << endl;
	}
	friend ostream& operator<<(ostream &out, const Test &test);

};

ostream& operator<<(ostream &out, const Test &test) {
	out << test.id << ": " << test.name;
	return out;
}

int main() {
	Test test1(0, "Eloi");
// test1.print();
	cout << test1 << endl;
	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
