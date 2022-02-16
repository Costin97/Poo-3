#ifndef PISICI_NEGRE_HPP
#define PISICI_NEGRE_HPP

#include "Cafenea.hpp"

class Pisici_Negre:public Cafenea{
	int varsta;
	char* nume;
	char* descriere;
	int isVaccin;
		public:
			Pisici_Negre();
			Pisici_Negre(int,char*,char*,int);
			Pisici_Negre(const Pisici_Negre&);
			Pisici_Negre& operator=(const Pisici_Negre&);
			~Pisici_Negre();
			int getVarsta();
			int isVaccinated();
			char* getDescriere();
			void afisare();
};

#endif
