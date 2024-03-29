/*
 * Bitmap.h
 *
 *  Created on: 5 mars 2024
 *      Author: eloilemaire
 */

#ifndef BITMAP_H_
#define BITMAP_H_

#include <string>
#include <cstdint>
using namespace std;

namespace ele {

class Bitmap {
private:
	int m_width{0};
	int m_height{0};
	unique_ptr<uint8_t[]> m_pPixels{nullptr};

public:
	Bitmap(int width, int height);
	void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
	bool write(string filename);
	virtual ~Bitmap();
};

} /* namespace ele */

#endif /* BITMAP_H_ */
