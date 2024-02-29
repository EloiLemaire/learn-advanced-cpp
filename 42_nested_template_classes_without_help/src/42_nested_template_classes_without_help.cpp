//============================================================================
// Name        : 42_nested_template_classes_without_help.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ring.h"
using namespace std;

int main() {

	ring<string> test_ring(3);
	test_ring.add("2");
	test_ring.add("3");
	test_ring.add("4");
	test_ring.add("1");

	for (ring<string>::iterator it=test_ring.begin(); it != test_ring.end(); it++){
		cout << *it << endl;
	}

	for(auto value: test_ring){
		cout << value << endl;
	}
	return 0;
}
