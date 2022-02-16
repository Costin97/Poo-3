#ifndef PISICI_COLORATE_HPP
#define PISICI_COLORATE_HPP

#include "Cafenea.hpp"

class Pisici_Colorate:public Cafenea{
	int varsta;
	char* nume;
	char* descriere;
	int isVaccin;
		public:
			Pisici_Colorate();
			Pisici_Colorate(int,char*,char*,int);
			Pisici_Colorate(const Pisici_Colorate&);
			Pisici_Colorate& operator=(const Pisici_Colorate&);
			~Pisici_Colorate();
			int getVarsta();
			int isVaccinated();
			char* getDescriere();
			void afisare();
};

#endif
