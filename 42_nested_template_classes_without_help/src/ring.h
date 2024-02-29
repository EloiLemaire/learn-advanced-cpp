/*
 * ring.h
 *
 *  Created on: 29 févr. 2024
 *      Author: eloilemaire
 */

#ifndef RING_H_
#define RING_H_
#include <iostream>

template<typename T>
class ring {
private:
	int m_size;
	int m_pos = 0;
	T *m_values;

public:
	ring(int size) :
			m_size(size) {
		m_values = new T[size];

		for (int i = 0; i < m_size; i++) {
			m_values[i] = T();
		}
	}

	~ring() {
		delete[] m_values;
	}

	void add(T value) {
		m_values[m_pos++] = value;
		m_pos %= m_size;
	}

	T& get(int pos) {
		return m_values[pos];
	}

	int size() {
		return m_size;
	}

	class iterator;

	iterator begin(){
		return iterator(0, *this);
	}

	iterator end(){
		return iterator(m_size, *this);
	}

}
;

template <typename T>
class ring<T>::iterator{
private:
	int m_pos;
	ring &m_ring;

public:
	iterator(int pos, ring<T> &aRing): m_pos(pos), m_ring(aRing){}

	iterator &operator++(int){
		m_pos++;
		return *this;
	}

	iterator &operator++(){
		m_pos++;
		return *this;
	}

	bool operator!=(const iterator &other) const{
		return m_pos != other.m_pos;
	}

	T &operator*(){
		return m_ring.get(m_pos);
	}


};

#endif /* RING_H_ */
