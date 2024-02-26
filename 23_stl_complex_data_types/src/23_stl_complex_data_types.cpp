//============================================================================
// Name        : 23_stl_complex_data_types.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <set>
#include <vector>
using namespace std;


int main() {
	set< vector<int> > unique_vectors;

	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);

	vector<int> v2;
	v2.push_back(1);
	v2.push_back(2);

	vector<int> v3;
	v3.push_back(2);
	v3.push_back(1);

	vector<int> v4;
	v4.push_back(3);
	v4.push_back(4);

	unique_vectors.insert(v1);
	unique_vectors.insert(v2);
	unique_vectors.insert(v3);
	unique_vectors.insert(v4);

	for(set< vector<int> >::iterator sIt = unique_vectors.begin(); sIt != unique_vectors.end(); sIt++){
		for(vector<int>::const_iterator vIt = sIt->begin(); vIt != sIt->end(); vIt++){ // Values in set can't be changed by
			// an iterator, that's why we need to use a const_iterator. Actually the set<...>::iterator is a const_iterator
			// by default
			cout << *vIt << ", " << flush;
		}
		cout << endl;
	}

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
