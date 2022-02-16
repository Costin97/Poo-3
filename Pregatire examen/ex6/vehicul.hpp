#ifndef VEHICUL_HPP
#define VEHICUL_HPP

#include "baza.cpp"

class Vehicul:public Baza{
	char *proprietar;
	int pret;
		public:
			Vehicul();
			Vehicul(const char*,int);
			int get_Pret();
			~Vehicul();
			void afisare();
};

#endif
