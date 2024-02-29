/*
 * ring.h
 *
 *  Created on: 29 févr. 2024
 *      Author: eloilemaire
 */

#ifndef RING_H_
#define RING_H_
#include <vector>
#include <iostream>
using namespace std;

namespace ele {

template<typename T>
class ring {
private:
	vector<T> data;
	int length;
	int next_idx = 0;

public:
	class iterator;
	ring(int size){
		this->length = size;
		this->data = vector<T>(length, T());
	}

	void add(T value){
		data[next_idx] = value;
		next_idx = (next_idx + 1) % length;
	}

	auto get(int idx) -> T{
		if (idx < 0 || idx >= length){
			throw "Index is out of range";
		}
		else return data[idx];
	}

	int size(){
		return length;
	}

	void print(){
		for (auto d: data){
			cout << d << endl;
		}
	}
};

template <typename T>
class ring<T>::iterator{
public:
	void print(){
		cout << "Doing nothing yet." << endl;
	}
};

} /* namespace ele */

#endif /* RING_H_ */
