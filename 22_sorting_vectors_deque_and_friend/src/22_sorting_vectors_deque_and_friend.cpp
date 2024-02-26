//============================================================================
// Name        : 22_sorting_vectors_deque_and_friend.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

class Test {
private:
	string name;
	int id;

public:
	Test() :
			name(""), id(0) {
	}
	;
	Test(int id, string name) :
			name(name), id(id) {
	}
	;
	void print() {
		cout << "ID: " << id << " – Name: " << name << endl;
	}
	/* bool operator<(const Test &other) const{
	 return id < other.id;
	 }*/

	friend bool comp(const Test &a, const Test &b);
};

bool comp(const Test &a, const Test &b) {
	return a.id < b.id;
}

int main() {

	vector<Test> testVector;
	testVector.push_back(Test(5, "Eloi"));
	testVector.push_back(Test(6, "Ombeline"));
	testVector.push_back(Test(4, "JB"));
	testVector.push_back(Test(3, "Paul"));

	// sort(testVector.begin(), testVector.end()); // Use if < is implemented
	sort(testVector.begin(), testVector.end(), comp); // Provide a comparison function

	for (vector<Test>::iterator it = testVector.begin(); it != testVector.end();
			it++) {
		it->print();
	}

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
