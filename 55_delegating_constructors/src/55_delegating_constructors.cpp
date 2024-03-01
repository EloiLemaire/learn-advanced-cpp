//============================================================================
// Name        : 55_delegating_constructors.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Parent{
private:
	int value = 5;
	string greet = "Welcome";

public:
	Parent(): Parent("stranger"){ // If no variable is provided, constructor with name stranger is used first.
		cout << greet << "!" << endl;
	}
	Parent(string name){
		cout << greet << " " << name << "!" << endl;
	}
};


int main() {
	Parent parent;
	Parent parentEloi("Eloi");
	return 0;
}
