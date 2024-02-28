//============================================================================
// Name        : 39_decltype_typeid_and_name_mangling.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <typeinfo> // Don't forget to include. Otherwise results are not always trustworthy
using namespace std;

int main() {
	string value;

	cout << typeid(value).name() << endl;

	decltype(value) name = "Bob";

	cout << typeid(name).name() << endl;

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
