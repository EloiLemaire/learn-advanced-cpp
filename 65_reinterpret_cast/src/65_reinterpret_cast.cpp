//============================================================================
// Name        : 65_reinterpret_cast.cpp
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
		cout << "Damn! I can speak!" << endl;
	}
	virtual ~Parent() = default;
};

class Brother: public Parent{

};

class Sister: public Parent{

};


int main() {
	Parent parent;
	Brother brother;
	Sister sister;

	Brother *pbb = &brother;

	// Sister *psb = dynamic_cast<Sister *>(pbb);// returns nullptr
	// Sister *psb = static_cast<Sister *>(pbb); // Throw a static_cast error
	Sister *psb = reinterpret_cast<Sister *>(pbb); // Works but is really likely error-prone


	if (psb == nullptr){
		cout << "Invalid cast!" << endl;
	}
	else{
		cout << psb << endl;
		psb->speak();
	}


	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
