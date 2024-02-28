//============================================================================
// Name        : 40_the_auto_keyword.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <typeinfo>
using namespace std;

auto plus4(int value) -> int { // Trailing types is the return type of the function (after ->)
	return value + 4;
}

template<typename T>
auto my_plus(T v1, T v2) -> decltype (v1 + v2){ // Trailing type can be declare with decltype for template use especially
	return v1 + v2;
}

template<typename T>
auto my_plus1(T v1, T v2) -> T{
	return v1 + v2;
}

int main() {

	auto value = 7; // C++ finds automatically which type to cast
	cout << value << endl;

	auto text = "Hello there!"; // C++ finds automatically which type to cast

	cout << typeid(text).name() << endl;

	cout << text << endl;

	cout << plus4(7) << endl;

	cout << my_plus(3, 4) << endl;

	cout << my_plus(4, 5) << endl;

	cout << my_plus('a', 'b') << endl;

	return 0;
}
