//============================================================================
// Name        : 12_vectors.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Goal: declare a new vector then declare an iterator to iterate over the vector's elements.

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<string> strings;
	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");


	/*
	// Iterating in a less efficient but also working way
	for (int i = 0; i < strings.size(); i ++){
		cout << strings[i] << endl;
	}
	*/


	// Iterating over the vector using an actual iterator
	for (vector<string>::iterator it = strings.begin(); it < strings.end(); it++){
		cout << *it << endl;
	}

	cout << "Program completed!" << endl;
	}
