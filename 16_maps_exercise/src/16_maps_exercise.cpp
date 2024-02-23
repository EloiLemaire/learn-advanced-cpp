//============================================================================
// Name        : 16_maps_exercise.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int menu() {
	stringstream ss;
	int choice;
	ss << "=========== Menu ===========" << endl;
	ss << "1. Add new age" << endl;
	ss << "2. Show content of table" << endl;
	ss << endl << "Enter entry > " << flush;
	cout << ss.str() << flush;
	cin >> choice;
	return choice;
}

void displayTable(map<string, int> table) {
	for (map<string, int>::iterator it = table.begin(); it != table.end();
			it++) {
		cout << it->first << ": " << it->second << endl;
	}
}

int main() {
	// Declare variables
	int choice;
	string name;
	int age;
	map<string, int> ages;

	// Proceed
	while (true) {
		choice = menu();
		switch (choice) {
		case 1:
			cout << "Name: " << flush;
			cin >> name;
			cout << "Age: " << flush;
			cin >> age;
			ages[name] = age;
			break;

		case 2:
			displayTable(ages);
			break;

		default:
			cout << "Entry not recognized" << endl;
		}
	}

	return 0;
}
