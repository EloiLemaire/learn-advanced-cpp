//============================================================================
// Name        : 10_struct_and_padding.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#pragma pack(push, 1) // To prevent from automated padding
struct Person{
	//string name;
	char name[64];
	int age;
	double height;
};
#pragma pack(pop) // To restore padding for efficiency

int main() {
	Person person;
	cout << sizeof(person) << endl; // returns 80 even though 76 bytes would be sufficient.
									// When #pragma pack(push, 1), is called we get 76
	return 0;
}
