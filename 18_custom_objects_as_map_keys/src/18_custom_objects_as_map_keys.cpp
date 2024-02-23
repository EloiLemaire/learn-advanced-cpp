//============================================================================
// Name        : 18_custom_objects_as_map_keys.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

class Person{
private:
	string name;
	int id;

public: // Every method in the class must be constant since it's a key and key are unmutable
	Person(): name(""), id(0){};
	Person(string name, int id): name(name), id(id){};
	void print() const{
		cout << "Name: " << name << ", Id: " << id << flush;
	}

	bool operator<(Person const &other) const{ // Overriding the < operator
		if (name == other.name){
			return id < other.id;
		}
		return name < other.name;
	}
};

int main() {
	map<Person, int> ages;
	ages[Person("Eloi", 5)] = 24;
	ages[Person("Eloi", 3)] = 23;
	ages[Person("Ombeline", 6)] = 21;

	for (map<Person, int>::iterator it = ages.begin(); it != ages.end(); it++){
		it->first.print();
		cout << ", Age: " << it->second << endl;
	}


	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
