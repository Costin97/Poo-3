#ifndef CAPRE_HPP
#define CAPRE_HPP

#include "ferma.hpp"

class Capre:public Ferma{
	int cantitate_mancare;
	char *tip_mancare;
	int nr_animale;
		public:
			Capre();
			Capre(int,char*,int);
			Capre& operator=(const Capre&);
			void afisare();
			int get_Mancare();
			char* get_Tip();
			int get_Numar();
			~Capre();
};

#endif
