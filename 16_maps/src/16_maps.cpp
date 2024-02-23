//============================================================================
// Name        : 16_maps.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

int main() {
	// Declare a new map by setting type of the key, value
	map<string, int> ages;
	// Add key-value pairs to the map
	ages["Eloi"] = 12;
	ages["Ombeline"] = 21;
	ages["Jean-Baptiste"] = 28;
	ages["Paul"] = 29;

	// Key are unique
	ages["Eloi"] = 24;

	// Access value from key
	cout << "Eloi: " << ages["Eloi"] << endl;

	// Accessing value from an undefined key will add the key with a 0 value
	cout << "Maman: " << ages["Maman"] << endl;
	cout << "Papa: " << ages["Papa"] << endl;

	cout << "---------------------" << endl;

	// Test if key already exist in the map
	if (ages.find("Papa") == ages.end()) {
		cout << "Key not found" << endl;
	} else {
		cout << "Papa: " << ages["Papa"] << endl;
	}

	// Display the whole map
	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
