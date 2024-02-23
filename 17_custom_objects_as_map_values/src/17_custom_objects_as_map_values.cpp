//============================================================================
// Name        : 17_custom_objects_as_map_values.cpp
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
	int age;

public:
	Person(): name(""), age(0){}
	Person(string name, int age): name(name), age(age){}
	void print(){
		cout << "Name: " << name << ", Age: " << age << endl;
	}
};


int main() {
	map<int, Person> ages;

	ages[0] = Person("Eloi", 24);
	ages[1] = Person("Ombeline", 21);

	for (map<int, Person>::iterator it = ages.begin(); it != ages.end(); it++){
		cout << it->first << " - "<< flush;
		it->second.print();
	}
	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
