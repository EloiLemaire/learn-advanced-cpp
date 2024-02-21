//============================================================================
// Name        : 8_reading_text_files.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream inFile; // i for input file stream. o would give an output file stream.

	string inFileName = "text.txt";

	inFile.open(inFileName);
	if (inFile.is_open()){
		string line;
		while(inFile){// fstream object was overloaded (it returns !inFile.eof())
			getline(inFile, line); // To read a file line by line
			cout << line << endl;
		}
		inFile.close(); // Make sure not to forget this line!
	}
	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
