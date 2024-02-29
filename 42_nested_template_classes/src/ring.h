/*
 * ring.h
 *
 *  Created on: 29 févr. 2024
 *      Author: eloilemaire
 */

#ifndef RING_H_
#define RING_H_
#include <iostream>
using namespace std;

namespace ele {

template<typename T>
class ring {
private:
	int m_pos = 0;
	int m_size;
	T* m_values;

public:
	class iterator;
	ring(int size): m_pos(0), m_size(size), m_values(NULL){ // m_values(NULL or 0) to prevent from any compiler warning
		m_values = new T[size];
	}

	~ring(){
		delete [] m_values; // Don't forget the [] to delete the whole array.
	}

	void add(T value){
		m_values[m_pos++] = value;
		m_pos %= m_size;
	}

	T &get(int idx){
		if (idx < 0 || idx >= m_size){
			throw "Index is out of range";
		}
		else return m_values[idx];
	}

	int size(){
		return m_size;
	}

	void print(){
		for (int i = 0; i < m_size; i++){
			cout << m_values[i] << endl;
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
