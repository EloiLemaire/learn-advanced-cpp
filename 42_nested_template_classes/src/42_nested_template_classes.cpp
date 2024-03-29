//============================================================================
// Name        : 42_nested_template_classes.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <typeinfo>
#include "ring.h"
using namespace std;
using namespace ele;

int main() {
	ring<string> test_ring(3);

	test_ring.add("1");
	test_ring.add("2");
	test_ring.add("3");
	test_ring.add("4");
	test_ring.add("5");

	/*for (int i = 0; i < test_ring.size(); i++) {
		cout << test_ring.get(i) << endl;
	}*/

	for(ring<string>::iterator it = test_ring.begin(); it != test_ring.end(); it++){
		cout << *it << endl;
	}


	return 0;
}
