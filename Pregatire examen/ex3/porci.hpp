#ifndef PORCI_HPP
#define PORCI_HPP

#include "ferma.hpp"

class Porci:public Ferma{
	int cantitate_mancare;
	char *tip_mancare;
	int nr_animale;
		public:
			Porci();
			Porci(int,char*,int);
			Porci& operator=(const Porci&);
			void afisare();
			int get_Mancare();
			char* get_Tip();
			int get_Numar();
			~Porci();
};

#endif
