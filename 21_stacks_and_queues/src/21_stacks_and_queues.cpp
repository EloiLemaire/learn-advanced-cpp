//============================================================================
// Name        : 21_stacks_and_queues.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test {
private:
	string name;

public:
	Test() :
			name("") {
	}
	;
	Test(string name) :
			name(name) {
	}
	;
	~Test() {
		// cout << name << " destroyed." << endl;
	}
	void print() {
		cout << name << endl;
	}
};

int main() {
	stack<Test> testStack;
	testStack.push(Test("Eloi")); // When adding a value to a stack, the value is destroyed
	testStack.push(Test("Ombeline"));
	testStack.push(Test("JB"));
	testStack.push(Test("Paul"));

	cout << endl;

	Test test = testStack.top(); // to do a copy of the top value
	test.print();
	testStack.pop(); // Destroys the top value

	test = testStack.top();
	test.print();

	cout << endl;

	queue<Test> testQueue;
	testQueue.push(Test("Eloi")); // When adding a value to a stack, the value is destroyed
	testQueue.push(Test("Ombeline"));
	testQueue.push(Test("JB"));
	testQueue.push(Test("Paul"));

	cout << endl;

	while (testQueue.size() > 0){
		Test test1 = testQueue.front();
		testQueue.pop();
		test1.print();
	}

	cout << endl;

	cout << "Hello world!" << endl; // prints Hello world!
	return 0;
}
