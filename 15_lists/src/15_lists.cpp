//============================================================================
// Name        : 15_lists.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> my_list(10, 1);

	// Set every element of the list to its index

	int i = 0;
	for (list<int>::iterator it = my_list.begin(); it != my_list.end(); it++) {
		*it = i++;

	}

	cout << "List 1:" << endl;

	// Display the content of the list
	for (list<int>::iterator it = my_list.begin(); it != my_list.end(); it++) {
		cout << *it << endl;
	}

	// Add an element at the end of the list
	my_list.push_back(10);
	// Add an element at the beginning of the list
	my_list.push_front(-1);

	cout << "List 2:" << endl;

	// Display the content of the list
	for (list<int>::iterator it = my_list.begin(); it != my_list.end(); it++) {
		cout << *it << endl;
	}

	int idx = 0;
	// Remove the 2 from the list (index of 2 is 3)
	for (list<int>::iterator it = my_list.begin(); it != my_list.end(); it++) {
		if (idx++ == 3)
			it = my_list.erase(it); // Connect the new previous and next indexes with the assign.
									// Erase the element that it returns
	}

	cout << "List 3:" << endl;

	// Display the content of the list
	for (list<int>::iterator it = my_list.begin(); it != my_list.end(); it++) {
		cout << *it << endl;
	}
	/*
	 // Change a value and erase an element
	 for (list<int>::iterator it = my_list.begin(); it != my_list.end();) {
	 if (*it == 6) {
	 *it = 66;
	 }

	 if (*it == 5) {
	 it = my_list.erase(it);
	 } else
	 it++;
	 }

	 cout << "List 4:" << endl;

	 // Display the content of the list
	 for (list<int>::iterator it = my_list.begin(); it != my_list.end(); it++) {
	 cout << *it << endl;
	 }
	 */

	list<int>::iterator it = my_list.begin();
	while (it != my_list.end()) {
		if (*it == 6) {
			*it = 66;
		}

		if (*it == 5) {
			it = my_list.erase(it); // Removes an element from the list depending on its value.
		} else {
			it++;
		}
	}

	cout << "List 5:" << endl;

	// Display the content of the list
	for (list<int>::iterator it = my_list.begin(); it != my_list.end(); it++) {
		cout << *it << endl;
	}

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
