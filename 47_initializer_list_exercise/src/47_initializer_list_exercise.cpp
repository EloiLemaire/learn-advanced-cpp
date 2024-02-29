//============================================================================
// Name        : 47_initializer_list_exercise.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ring.h"
using namespace std;

int main() {

	ring<int> test_ring(4);
//	test_ring.add("2");
//	test_ring.add("3");
//	test_ring.add("4");
//	test_ring.add("1");
	test_ring.add({2, 3, 4, 1, 5});



	for (ring<int>::iterator it=test_ring.begin(); it != test_ring.end(); it++){
		cout << *it << endl;
	}

	for(auto value: test_ring){
		cout << value << endl;
	}
	return 0;
}
