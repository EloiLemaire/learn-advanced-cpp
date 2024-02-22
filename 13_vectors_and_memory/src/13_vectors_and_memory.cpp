//============================================================================
// Name        : 13_vectors_and_memory.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

// Goal check how capacity increases with the size of the vector.
// Reserve memory so program is more efficient.

int main() {
	vector<double> v(0);

	// v.reserve(1000);

	int capacity = v.capacity();
	cout << "Size/Capacity: " << v.size() << " / " << capacity << endl;

	for (int i = 0; i < 10000; i++) {
		if (v.capacity() != capacity) {
			capacity = v.capacity();
			cout << "Size/Capacity: " << v.size() << " / " << capacity << endl;
		}
		v.push_back(i);
	}
	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
