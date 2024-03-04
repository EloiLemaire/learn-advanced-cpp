//============================================================================
// Name        : 67_bind.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

int sum(int a, int b, int c){
	cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
	return a + b + c;
}

int run(function<int(int, int)> func){
	return func(7, 3);
}

int main() {

	cout << sum(1, 2, 3) << endl;
	auto calc1 = bind(sum, 1, 2, 3);
	cout << calc1() << endl;

	auto calc2 = bind(sum, 100, _2, _1); // _1, _2 are called placeholders. There are the (x)th variables passed as arg.
	cout << calc2(10, 20) << endl;

	cout << run(calc2) << endl;



	return 0;
}
