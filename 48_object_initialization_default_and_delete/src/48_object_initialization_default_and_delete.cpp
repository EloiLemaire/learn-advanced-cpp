//============================================================================
// Name        : 48_object_initialization_default_and_delete.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test {
private:
	int id = 0;
	string name = "Eloi";

public:
	Test() = default;
	Test(const Test &other) = default; // Set the copy constructor to default
	Test operator=(Test &other) = delete; // Delete the assignment operator
	Test(int id, string name): id(id), name(name){}

	void print(){
		cout << id << ": " << name << endl;
	}
};

int main() {
	Test test;
	test.print();

	Test test1(1, "Omb");
	test1.print();

	/* Won't work since the = operator was deleted.
	 * Test test2;
	 * test2 = test1; */



	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
