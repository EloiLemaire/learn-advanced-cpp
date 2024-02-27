//============================================================================
// Name        : 32_template_functions.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<typename T>
void print(T obj){
	cout << obj << endl;
}

int main(){
	print<string>("Hello");
	print<double>(3.14);
	print(2); // It's not mandatory to precise the type. Here it's obvious, the compiler will do the work for us.
	return 0;
}
