//============================================================================
// Name        : 68_unique_pointers.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{
public:
	Test(){
		cout << "Created" << endl;
	}

	void greet(){
		cout << "Hello there" << endl;
	}

	~Test(){
		cout << "Destructed" << endl;
	}
};

class Init{
private:
	unique_ptr<Test> pInt;

public:
	Init(): pInt(new Test){ // Initialization of a unique pointer in a class must be done with the initialization list.
		cout << "Class created" << endl;
	}
};


int main() {

	unique_ptr<int> pInt(new int{7});
	cout << *pInt << endl;

	*pInt = 9;
	cout << *pInt << endl;

	{
	unique_ptr<Test> pTest1(new Test);
	pTest1->greet();
	}// pTest is destroyed once getting out of the scope.

	unique_ptr<Test[]> pTest2(new Test[2]);
	pTest2[0].greet();

	Init init;



	cout << "Program finished!" << endl; // prints Hello world!
	return 0;
}
