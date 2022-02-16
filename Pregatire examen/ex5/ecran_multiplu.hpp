#ifndef ECRAN_MULTIPLU_HPP
#define ECRAN_MULTIPLU_HPP

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

#include "pixel.hpp"

class Ecran_multiplu{
	Pixel ***v;
	int m;
	int n;
		public:
			Ecran_multiplu();
			Ecran_multiplu(int,int);
			friend ostream& operator<<(ostream&,Ecran_multiplu&);
			Ecran_multiplu& operator=(const Ecran_multiplu&);
			Ecran_multiplu(const Ecran_multiplu&);
			Ecran_multiplu& operator+(const Ecran_multiplu&);
			int get_Linii();
			int get_Coloane();
};

#endif
