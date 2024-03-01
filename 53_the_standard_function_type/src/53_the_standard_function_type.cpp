//============================================================================
// Name        : 53_the_standard_function_type.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


bool check_function(string text){
	int size = 3;
	return text.size() == size;
}


class CheckFunctor{
public:
	bool operator()(string text){
		int size = 3;
		return text.size() == size;
	}
} check_functor;


bool run(function<bool(string)> check){ // function<[return type]([input type])> this is a standard function type
	// This way we can constraint the type (return and input) that the function should have.
	string text = "one";
	cout << check(text) << endl;
}


int main() {

	int size = 3;
	string text = "four";

	auto check_lambda_function = [size](string text){
		return text.size() == size;
	};

	cout << check_function(text) << endl;

	cout << check_lambda_function(text) << endl;

	cout << check_functor(text) << endl;

	cout << endl;

	run(check_functor);
	run(check_function);
	run(check_lambda_function);




	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
