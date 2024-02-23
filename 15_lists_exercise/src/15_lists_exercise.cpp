//============================================================================
// Name        : 15_lists_exercise.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

list<int> buildList(int n);
void displayList(list<int> l);
list<int> addToBeginning(list<int> l, int value);
list<int> addToEnd(list<int> l, int value);
list<int> eraseElement(list<int> l, int index);
list<int> insertElement(list<int> l, int index, int value);
stringstream makeMenu();

list<int> buildList(int n) {
	list<int> l(n);
	int i = 0;
	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		*it = i++;
	}
	return l;
}

void displayList(list<int> l) {
	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		cout << *it << endl;
	}
}

list<int> addToBeginning(list<int> l, int value) {
	l.push_front(value);
	return l;
}

list<int> addToEnd(list<int> l, int value) {
	l.push_back(value);
	return l;
}

list<int> eraseElement(list<int> l, int index) {
	int idx = 0;
	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		if (idx++ == index) {
			it = l.erase(it);
			return l;
		}
	}
	throw string("Index out of range");
	return l;
}

list<int> insertElement(list<int> l, int index, int value) {
	int idx = 0;
	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		if (idx++ == index) {
			l.insert(it, value);
			return l;
		}
	}
	throw string("Index out of range");
	return l;
}

void saveList(list<int> l, string fileName) {
	ofstream outFile;

	outFile.open(fileName);

	if (outFile.is_open()) {
		for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
			outFile << *it << endl;
		}
		outFile.close();
	} else {
		cout << "File could not be opened properly" << endl;
	}
}

list<int> readList(string fileName) {
	ifstream inFile;
	list<int> l;
	int value;

	inFile.open(fileName);

	if (inFile.is_open()) {
		while (inFile) {
			inFile >> value;
			if (inFile)
				l.push_back(value);
		}
		inFile.close();
	} else {
		cout << "File could not be opened properly" << endl;
	}
	return l;
}

stringstream makeMenu() {
	stringstream ss;
	ss << endl << "========= Menu =========" << endl;
	ss << "1. Make new list." << endl;
	ss << "2. Insert element at the beginning." << endl;
	ss << "3. Insert element at the end." << endl;
	ss << "4. Insert element at a given index." << endl;
	ss << "5. Erase element at a given index." << endl;
	ss << "6. Display list." << endl;
	ss << "7. Save list to file." << endl;
	ss << "8. Read list from file." << endl;
	ss << "Enter input: " << flush;
	return ss;
}

int main() {
	bool quit = false;
	int input = 0;

	stringstream ss = makeMenu();
	list<int> l;

	while (!quit) {
		string filename = "list.txt";
		int idx;

		// Display menu
		cout << ss.str() << flush;
		cin >> input;

		switch (input) {
		case 1:
			cout << "Length of the list: " << flush;
			cin >> input;
			l = buildList(input);
			break;

		case 2:
			cout << "Value to be added: " << flush;
			cin >> input;
			l = addToBeginning(l, input);
			break;

		case 3:
			cout << "Value to be added: " << flush;
			cin >> input;
			l = addToEnd(l, input);
			break;

		case 4:
			cout << "Value to be added: " << flush;
			cin >> input;
			cout << "Index where value should be added: " << flush;
			cin >> idx;
			l = insertElement(l, idx, input);
			break;

		case 5:
			cout << "Index of the value to be erased: " << flush;
			cin >> input;
			l = eraseElement(l, input);
			break;

		case 6:
			displayList(l);
			break;

		case 7:
			cout << "Name of the file where list must be written: ";
			cin >> filename;
			saveList(l, filename);
			break;

		case 8:
			cout << "Name of the file where list must be read: " << flush;
			cin >> filename;
			l = readList(filename);
			break;

		default:
			cout << "Option selected not recognized." << endl;
			break;
		}
	}

	cout << "Program completed!" << endl; // prints Hello world!
	return 0;
}
