#ifndef GAINI_HPP
#define GAINI_HPP

#include "ferma.hpp"

class Gaini:public Ferma{
	int cantitate_mancare;
	char *tip_mancare;
	int nr_animale;
		public:
			Gaini();
			Gaini(int,char*,int);
			Gaini& operator=(const Gaini&);
			void afisare();
			int get_Mancare();
			char* get_Tip();
			int get_Numar();
			~Gaini();
};

#endif
