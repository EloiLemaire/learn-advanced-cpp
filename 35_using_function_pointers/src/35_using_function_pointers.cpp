//============================================================================
// Name        : 35_using_function_pointers.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <vector>
#include <chrono>
using namespace std;

bool match(string text) {
	return text.size() == 3;
}

int count_if1(vector<string>::iterator begin, vector<string>::iterator end,
		bool (*match)(string)) {
	int res = 0;
	for (vector<string>::iterator it = begin; it != end; it++) {
		res += match(*it);
	}
	return res;
}

void time_it(
		int (*function)(vector<string>::iterator begin,
				vector<string>::iterator end, bool (*match)(string)), vector<string>::iterator begin,
				vector<string>::iterator end, bool (*match)(string)) {
	auto t_beg = std::chrono::high_resolution_clock::now();

	int res = count_if1(begin, end, match);

	auto t_end = std::chrono::high_resolution_clock::now();
	auto t_duration = std::chrono::duration_cast<std::chrono::microseconds>(t_end - t_beg);
	cout << "Elasped time: " << t_duration.count() << " ms, " << res << endl;
}

int main() {


	vector<string> texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("four");
	texts.push_back("five");
	texts.push_back("six");
	texts.push_back("seven");

	for (vector<string>::iterator it = texts.begin(); it != texts.end(); it++) {
		cout << *it << endl;
	}

	cout << count_if(texts.begin(), texts.end(), match) << endl;
	auto beg = std::chrono::high_resolution_clock::now();

	cout << count_if1(texts.begin(), texts.end(), match) << endl;

	auto end = std::chrono::high_resolution_clock::now();

	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(
			end - beg);

	cout << "Elasped time: " << duration.count() << " ms" << endl;

	time_it(count_if1, texts.begin(), texts.end(), match); // Time it in a function

	return 0;
}
