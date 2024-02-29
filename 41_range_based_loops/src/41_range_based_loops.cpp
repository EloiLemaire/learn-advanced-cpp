//============================================================================
// Name        : 41_range_based_loops.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

	auto texts = { "one", "two", "three" };

	for (auto text : texts) { // It's just like in Python for text in texts
							  // Works with any iterable object. Can also work on a customized class if
						      // work was done for it
		cout << text << endl;
	}

	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);

	for (auto number : numbers) {
		cout << number << endl;
	}

	string hello = "Hello"; // If I don't set the variable as string (setting auto instead), the auto for loop won't
							// work properly
	for (auto c: hello){
		cout << c << endl;
	}


	return 0;
}
