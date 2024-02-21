//============================================================================
// Name        : 11_reading_and_writing_binary_files.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

struct Someone {
	char name[64];
	int age;
	double height;
};

int main() {

	// Build struct to write from
	Someone someone = { "Eloi", 24, 1.85 };

	// Write struct to binary file
	ofstream outFile;
	string outFileName = "someone.bin";

	outFile.open(outFileName, ios::binary); // It's important to precise the file should be written as a binary file
											// to prevent from adding unwanted return carriage.
	if (outFile.is_open()) {
		outFile.write(reinterpret_cast<char*>(&someone), sizeof(someone));
		outFile.close();
	}

	else {
		cout << "File (" << outFileName << ") could not be written.";
	}


	// Build struct to write to
	Someone someoneElse = { };

	// Read struct from binary file
	ifstream inFile;

	inFile.open(outFileName, ios::binary);

	if (inFile.is_open()) {
		inFile.read(reinterpret_cast<char*>(&someoneElse), sizeof(someoneElse));
		inFile.close();
	}

	cout << "Name: " << someoneElse.name << endl;
	cout << "Age: " << someoneElse.age << endl;
	cout << "Height: " << someoneElse.height << endl;

	cout << "Program completed!" << endl; // prints Hello world!
	return 0;
}
