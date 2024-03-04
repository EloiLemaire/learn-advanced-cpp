//============================================================================
// Name        : 66_perfect_forwarding.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{

};

template<typename T>
void call(T &&arg){
	check(forward<T>(arg));     // Both lines (18 & 19) are the same, they keep the variable as RValue
	check(static_cast<T>(arg)); // or LValue as it was passed in the function.
}

void check(Test &arg){
	cout << "LValue" << endl;
}

void check(Test &&arg){
	cout << "RValue" << endl;
}

int main() {
	Test test;

	call(Test());

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
