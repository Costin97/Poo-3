#ifndef ELEV_HPP
#define ELEV_HPP

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

class Elev{
	int *note;
	int nr_note;
	int nr_catalog;
		public:
			Elev();
			Elev(int*,int,int);
			Elev(const Elev&);
			Elev& operator=(const Elev&);
			float get_Medie();
			int get_NrCatalog();
			friend ostream& operator<<(ostream&,const Elev&);
			friend Elev operator-(const Elev&,const Elev&);
			bool operator<(const Elev&);
			friend Elev operator+(const Elev&,const Elev&);
			Elev& operator+=(const Elev&);
};

#endif
