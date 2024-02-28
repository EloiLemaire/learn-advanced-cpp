//============================================================================
// Name        : 38_functors.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


struct MatchTest{
	bool operator()(string &test){
		return test == "lion";
	}
};


void check(string text, MatchTest &test){
	if (test(text)){
		cout << "Matched!" << endl;
	}
	else {
		cout << "No match!" << endl;
	}
};

int main() {
	MatchTest m; // Functors since m() acts in a similar way as a function
	string text = "liond";
	cout << m(text) << endl;

	check(text, m);


	return 0;
}
