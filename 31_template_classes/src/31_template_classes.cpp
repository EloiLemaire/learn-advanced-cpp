//============================================================================
// Name        : 31_template_classes.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class T>
class Test {
private:
	T obj;
public:
	Test(T obj): obj(obj){};
	void print(){
		cout << obj << endl;
	}


};

int main() {

	Test<string> test1("hello");
	test1.print();

	Test<double> test2(3.14);
	test2.print();

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
