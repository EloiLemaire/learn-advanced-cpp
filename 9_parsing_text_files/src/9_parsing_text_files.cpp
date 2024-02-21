//============================================================================
// Name        : 9_parsing_text_files.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream inFile;

	string inFileName = "family.txt";

	inFile.open(inFileName);
	if (inFile.is_open()) {
		while(inFile){
			string name;
			int age;
			getline(inFile, name, ':');
			inFile >> age;
			inFile >> ws; // To discard the extra whitespace (space + tab + carriage return...)

			if(!inFile){ // Prevent from displaying the text if EOF is reached.
				break;
			}
			cout << name << " = " << age << endl;
		}
		inFile.close();
	}

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
