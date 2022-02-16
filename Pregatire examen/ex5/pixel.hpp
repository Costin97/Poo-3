#ifndef PIXEL_HPP
#define PIXEL_HPP

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

class Pixel{
	int culoare;
	public:
		Pixel();
		Pixel(int);
		int get_Culoare();
		void set_Culoare(int);
		~Pixel();
		Pixel& operator=(const Pixel&);
};

#endif
