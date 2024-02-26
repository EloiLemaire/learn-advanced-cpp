//============================================================================
// Name        : 20_sets.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <set>
#include <sstream>
using namespace std;

class Person {
private:
	string name;
	int age;

public:
	Person() :
			name(""), age(0) {
	}
	;
	Person(string name, int age) :
			name(name), age(age) {
	}
	;
	string print() const {
		stringstream ss;
		ss << "Name: " << name << ", Age: " << age << flush;
		return ss.str();
	}

	bool operator<(const Person &other) const {
		if (name == other.name) {
			return age < other.age;
		}
		return name < other.name;
	}
};

int main() {
	set<int> age;
	age.insert(10);
	age.insert(20);
	age.insert(30);
	age.insert(10);
	age.insert(0);

	for (set<int>::iterator it = age.begin(); it != age.end(); it++) {
		cout << *it << endl;
	}


	cout << endl;

	set<Person> persons;
	persons.insert(Person("Eloi", 24));
	persons.insert(Person("Ombeline", 21));
	persons.insert(Person("Eloi", 23));

	for (set<Person>::iterator it = persons.begin(); it != persons.end(); it++) {
		cout << it->print() << endl;
	}

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
