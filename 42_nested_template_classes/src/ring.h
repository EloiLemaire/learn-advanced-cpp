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
	T *m_values;

public:
	class iterator;
	ring(int size) :
			m_pos(0), m_size(size), m_values(NULL) { // m_values(NULL or 0) to prevent from any compiler warning
		m_values = new T[size];
	}

	~ring() {
		delete[] m_values; // Don't forget the [] to delete the whole array.
	}

	void add(T value) {
		m_values[m_pos++] = value;
		m_pos %= m_size;
	}

	T& get(int idx) {
		if (idx < 0 || idx >= m_size) {
			throw "Index is out of range";
		} else
			return m_values[idx];
	}

	iterator begin() {
		return iterator(0, *this);
	}

	iterator end() {
		return iterator(m_size, *this);
	}

	int size() {
		return m_size;
	}
};

template<typename T>
class ring<T>::iterator {
private:
	int m_pos;
	ring &m_ring;

public:
	iterator(int m_pos, ring<T> &aRing) :
			m_pos(m_pos), m_ring(aRing) {
	}

	iterator &operator++(int) {
		//return iterator(m_pos++, m_ring); // Would work as well but is less efficient since makes a new iterator
		m_pos++;
		return *this;
	}

	iterator &operator++() {
		m_pos++;
		return *this;
	}

	T &operator*() {
		return m_ring.get(m_pos);
	}

	bool operator!=(const iterator &other) const {
		return m_pos != other.m_pos;
	}
};

} /* namespace ele */

#endif /* RING_H_ */
