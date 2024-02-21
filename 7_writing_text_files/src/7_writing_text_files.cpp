//============================================================================
// Name        : 7_writing_text_files.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//
//Library to write and read files is fstream for file stream.
//You must:
//1. Declare a file object to read from: ofstream <file object name> (ofstream for output file stream).
//1. Bis/ We can also open the file as fstream: fstream <file object name>. See 2. Bis/ for changes.
//2. Open file: <file object name>.open(<path to file>)
//2. Bis/ If file object if fstream instead of ofstream, the following command must be used: <file object name>.open(<path to file>, ios::out)
//3. Test that file was properly open with: <file object name>.is_open()
//4. Write in the text with: <file object name> << <content to write>;
//Note that "endl" is not needed since buffer is flushed when the file is closed. Also, <content to write> can be string or int or...
//5. Close file: <file object name>.close()
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	fstream file;
	string filename = "test.txt";

	file.open(filename, ios::out);

	if (file.is_open()) {
		for (int i = 1; i < 11; i++) {
			file << i << ". This is a line" << endl;
		}

		file.close();
	} else {
		cout << "File \"" << filename << "\" couldn't be opened." << endl;
	}

	cout << "Program completed!" << endl;
	return 0;
}
