//============================================================================
// Name        : 5_custom_exceptions.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <exception>
using namespace std;

class MyException: public exception{
public:
	virtual const char* what() const _NOEXCEPT{
		return "Something bad happened";
	}
};


class Test{
public:
	void error(){
		throw MyException();
	}
};

int main() {

	Test test;
	try{
	test.error();
	} catch(MyException &e){
		cout << "Error caught: " << e.what() << endl;
	}
	cout << "Program still running!" << endl; // prints Hello world!
	return 0;
}
