//============================================================================
// Name        : 63_static_casts.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Parent {
public:
	Parent() = default;
	~Parent() = default;
	void speak() {
		cout << "I can speak" << endl;
	}
};

class Brother: public Parent{
public:
	Brother() = default;
	~Brother() = default;
};

int main() {
	Parent parent;
	Brother brother;

	Parent *ppb = &brother;
	cout << ppb << endl;
	ppb->speak();

	// Brother *pbp = ppb; // Subclass can't get assigned a superclass.
	Brother *pbp = static_cast<Brother *>(ppb); // Although if cast, it can work
	cout << pbp << endl;
	pbp->speak();

	Parent &&p = static_cast<Parent &&>(parent); // It's possible to cast variable to RValues references
	// Can be useful for plenty of applications
	p.speak();


	return 0;
}
