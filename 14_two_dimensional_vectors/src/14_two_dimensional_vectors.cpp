//============================================================================
// Name        : 14_two_dimensionnal_vectors.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Task: Create a 2-dimensional vector, initialize its values and return the
// 10x10 multiplication table.

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<vector<int> > table(10, vector<int>(10, 0));

	// Set first row values
	for (int row = 0; row < table.size(); row++) {
		table[row][0] = row + 1;
	}

	// Set first col values
	for (int col = 0; col < table[0].size(); col++) {
		table[0][col] = col + 1;
	}

	// Compute multiplications
	for (int row = 0; row < table.size(); row++) {
		for (int col = 0; col < table[row].size(); col++){
			table[row][col] = table[row][0] * table[0][col];
		}
	}

	// Display table
	for (int row = 0; row < table.size(); row++) {
		for (int col = 0; col < table[row].size(); col++) {
			cout << table[row][col] << "\t" << flush;
		}
		cout << endl;
	}

	cout << "Program completed!" << endl; // prints Hello world!
	return 0;
}
