/*
 * Bitmap.cpp
 *
 *  Created on: 5 mars 2024
 *      Author: eloilemaire
 */

#include <fstream>
#include "Bitmap.h"
#include "BitmapInfoHeader.h"
#include "BitmapFileHeader.h"

using namespace std;
using namespace ele;

namespace ele {

Bitmap::Bitmap(int width, int height) :
		m_width(width), m_height(height), m_pPixels(
				new uint8_t[width * height * 3] { }) {
	// TODO Auto-generated constructor stub

}

bool Bitmap::write(string filename) {

	BitmapFileHeader fileHeader;
	BitmapInfoHeader infoHeader;

	fileHeader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader)
			+ m_width * m_height * 3;
	fileHeader.dataOffset = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

	infoHeader.width = m_width;
	infoHeader.height = m_height;

	ofstream file;
	file.open(filename, ios::out | ios::binary);

	if (!file) { // File not properly opened.
		return false;
	}

	file.write((char*) &fileHeader, sizeof(fileHeader));
	file.write((char*) &infoHeader, sizeof(infoHeader));
	file.write((char*) m_pPixels.get(), m_width * m_height * 3);

	file.close();

	if (!file) { // File not properly closed.
		return false;
	}

	return true;
}

void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {
	if (x > 0 && x < m_width && y > 0 && y < m_height) {
		m_pPixels[3 * x + 3 * y * m_width] = blue;
		m_pPixels[3 * x + 3 * y * m_width + 1] = green;
		m_pPixels[3 * x + 3 * y * m_width + 2] = red;
	}

}

Bitmap::~Bitmap() {
// TODO Auto-generated destructor stub
}

} /* namespace ele */
