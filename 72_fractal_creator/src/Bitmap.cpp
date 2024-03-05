/*
 * Bitmap.cpp
 *
 *  Created on: 5 mars 2024
 *      Author: eloilemaire
 */

#include "Bitmap.h"
#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"
#include <fstream>

namespace ele {

Bitmap::Bitmap(int witdh, int height): m_width(witdh), m_height(height), m_pPixels(new uint8_t[witdh * height * 3]) {
	// TODO Auto-generated constructor stub

}

void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue){

}


bool Bitmap::write(string filename){
	BitmapFileHeader fileHeader;
	BitmapInfoHeader infoHeader;

	fileHeader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader) + m_width * m_height * 3;
	fileHeader.dataOffset = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

	infoHeader.width = m_width;
	infoHeader.height = m_height;
}


Bitmap::~Bitmap() {
	// TODO Auto-generated destructor stub
}

} /* namespace ele */
