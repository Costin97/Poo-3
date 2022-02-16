#ifndef PISICI_ALBE_HPP
#define PISICI_ALBE_HPP

#include "Cafenea.hpp"

class Pisici_Albe:public Cafenea{
	int varsta;
	char* nume;
	char* descriere;
	int isVaccin;
		public:
			Pisici_Albe();
			Pisici_Albe(int,char*,char*,int);
			Pisici_Albe(const Pisici_Albe&);
			Pisici_Albe& operator=(const Pisici_Albe&);
			~Pisici_Albe();
			int getVarsta();
			int isVaccinated();
			char* getDescriere();
			void afisare();
};

#endif
