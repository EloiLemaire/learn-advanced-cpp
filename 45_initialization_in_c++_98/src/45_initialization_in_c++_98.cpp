//============================================================================
// Name        : 45_initialization_in_c++_98.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string strings[] = {"one", "two", "three"};
	cout << strings[0] << endl;

	class C{
	public:
		string text;
		int id;
	};

	C c1 = {"Hello", 0};
	cout << c1.text << c1.id << endl;

	struct S{
		string text;
		int id;
	};

	S s1 = {"Hi", 1};
	cout << s1.text << s1.id << endl;

	struct { // Anonym struct declaration (struct has no name), works also for the classes with the public variables.
		string text;
		int id;
	} s2 = {"Bonjour", 2}, s3 = {"Ciao", 3};

	cout << s2.text << s2.id << endl;
	cout << s3.text << s3.id << endl;



	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
