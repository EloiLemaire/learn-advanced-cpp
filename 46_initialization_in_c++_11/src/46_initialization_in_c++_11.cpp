//============================================================================
// Name        : 46_initialization_in_c++_11.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int value{5};
	cout << value << endl;

	string text{"Hello"};
	cout << text << endl;

	struct S{
		string text;
		int id;
	};

	S s1{"Coucou", 0};
	cout << s1.text << s1.id << endl;

	int *pValue{}; // Initialize a pointer to null
	int *pValue2 = nullptr;
	cout << pValue << endl;
	cout << pValue2 << endl;

	string text1{}; // Empty { } initialize to the neutral value for the given type: "" for string, 0 for int...
	cout << text1 << endl;
	int value1{};
	cout << value1 << endl;

	vector<string> v1{"one", "two", "three"};
	for (auto value: v1){
		cout << value << endl;
	}




	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
