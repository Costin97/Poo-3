#ifndef REMORCA_HPP
#define REMORCA_HPP

#include "vehicul.hpp"

class Remorca:virtual public Vehicul{
	
	int dimensiuni[3]; //lungime, latime si inaltime
	int greutate_maxima;
		public:
			Remorca();
			Remorca(int[],int,const char*,int);
			~Remorca();
			void afisare();
			int get_Pret();

};

#endif
