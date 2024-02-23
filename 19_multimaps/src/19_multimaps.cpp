//============================================================================
// Name        : 19_multimaps.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

int main() {
	multimap<int, string> ages; // Multimap is a map which allows identical keys

	// We can't assign values to multimaps with the [·] operator but with insert method instead

	ages.insert(make_pair(1, "Papa"));
	ages.insert(make_pair(2, "Maman"));
	ages.insert(make_pair(3, "Paul"));
	ages.insert(make_pair(2, "Jean-Baptiste"));
	// ages[4] = "Jean-Baptiste"; not working

	for (multimap<int, string>::iterator it = ages.begin(); it != ages.end();
			it++) {
		cout << it->first << ": " << it->second << endl;
	}

	cout << endl;

	// Let's display every pair of key value that are the same:
	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its =
			ages.equal_range(2);
	for (multimap<int, string>::iterator it = its.first; it != its.second;
			it++) {
		cout << it->first << ": " << it->second << endl;
	}

	cout << endl;

	// Let's do the same but with the auto operator that shortens the declaration of the pair of iterator.
	auto its2 = ages.equal_range(2);
	for (multimap<int, string>::iterator it = its2.first; it != its2.second;
			it++) {
		cout << it->first << ": " << it->second << endl;
	}

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
