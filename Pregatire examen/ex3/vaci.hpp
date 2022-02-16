#ifndef VACI_HPP
#define VACI_HPP

#include "ferma.hpp"

class Vaci:public Ferma{
	int cantitate_mancare;
	char *tip_mancare;
	int nr_animale;
		public:
			Vaci();
			Vaci(int,char*,int);
			Vaci& operator=(const Vaci&);
			void afisare();
			int get_Mancare();
			char* get_Tip();
			int get_Numar();
			~Vaci();
};

#endif
