//============================================================================
// Name        : 64_dynamic_cast.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Parent{
public:
	virtual void speak(){
		cout << "I know how to speak!" << endl;
	}
};

class Brother: public Parent{
};

int main() {
	// Trying to do a downcast

	Parent parent;
	Brother brother;

	Parent *ppb = &brother;
	Brother *pbb = dynamic_cast<Brother *>(ppb); // Casting with a runtime check (returns nullptr if cast is invalid)

	if (pbb == nullptr){
		cout << "Invalid cast" << endl;
	}
	else{
		cout << pbb << endl;
	}

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
