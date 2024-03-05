//============================================================================
// Name        : 72_fractal_creator.cpp
// Author      : Eloi Lemaire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Bitmap.h"
using namespace std;
using namespace ele;


int main() {
	Bitmap bitmap(800, 600);
	bitmap.write("test.bmp");
	cout << "Program finished!" << endl; // prints Hello world!
	return 0;
}
