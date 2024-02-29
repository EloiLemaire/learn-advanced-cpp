//============================================================================
// Name        : 47_initializer_list.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <initializer_list>
using namespace std;

class Test {
public:
	Test(initializer_list<string> texts) {
		for (auto value : texts) {
			cout << value << endl;
		}
	}
	void print(initializer_list<string> l) {
		for (auto value : l) {
			cout << value << " " << flush;
		}
		cout << endl;
	}
};

int main() {
	int value { 5 };
	cout << value << endl;

	Test test( { "hey", "thereeee" });
	test.print({"this", "is", "a", "test"});


	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
