//============================================================================
// Name        : 37_abstract_classes_and_pure_virtual_functions.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal { // Abstract class since there is a pure virtual function
public:
	virtual void speak()=0; // =0 syntax makes this function pure virtual (meaning will be defined in subclass)
	virtual ~Animal() {
	}
};

class Dog: public Animal { // Abstract class since there is a pure virtual function
public:
	virtual void speak() {
		cout << "Woof!" << endl;
	}
	virtual void run()=0;
};

class Cat: public Animal { // Abstract class since there is a pure virtual function
public:
	virtual void speak() {
		cout << "Meow!" << endl;
	}
	virtual void scratch()=0;
};

// Subclasses from dog

class Greyhound: public Dog {
public:
	Greyhound() {
		cout << "Greyhound created" << endl;
	}
	virtual void run() {
		cout << "I run sooooo fast!" << endl;
	}
};

class Tequel: public Dog {
public:
	Tequel() {
		cout << "Tequel created" << endl;
	}
	virtual void run() {
		cout << "Walking is running!" << endl;
	}
};

// Subclasses from cat

class Siamese: public Cat {
public:
	Siamese() {
		cout << "Siamese created" << endl;
	}
	virtual void scratch() {
		cout << "I'm a mean cat, I scratch to the blood!" << endl;
	}
};

class Ragdoll: public Cat {
public:
	Ragdoll() {
		cout << "Ragdoll created" << endl;
	}
	virtual void scratch() {
		cout << "I'm the cuttest cat in the world, I don't scratch!" << endl;
	}
};

int main() {

	Greyhound grey;
	grey.speak();
	grey.run();
	Tequel teq;
	teq.run();
	Siamese siam;
	siam.speak();
	siam.scratch();
	Ragdoll rag;
	rag.speak();

	cout << endl;

	Animal *animals[4]; // Can store different subclass from Animal in a same array (only if defined as an array of
						// pointers to the parent Abstract class (parent class in general thanks to polymorphism).
	animals[0] = &grey;
	animals[1] = &teq;
	animals[2] = &siam;
	animals[3] = &rag;

	for (int i = 0; i < 4; i++) {
		animals[i]->speak();
	}

	return 0;
}
