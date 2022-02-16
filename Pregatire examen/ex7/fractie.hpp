#ifndef FRACTIE_HPP
#define FRACTIE_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Fractie{
	int numitor;
	int numarator;
		public:
			Fractie();
			Fractie(int,int);
			int get_Numarator();
			int get_Numitor();
			float get_Raport();
			friend istream& operator>>(istream&,Fractie&);
			void afisare();
			void set_Valoare(Fractie);
};

#endif
