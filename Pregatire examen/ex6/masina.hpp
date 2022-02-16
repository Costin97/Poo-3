#ifndef MASINA_HPP
#define MASINA_HPP

#include "vehicul.cpp"

class Masina:virtual public Vehicul{
	
	int dimensiuni[3]; //lungime, latime si inaltime
	char *marca;
		public:
			Masina();
			Masina(int[],char*,const char*,int);
			~Masina();
			void afisare();
			int get_Pret();

};

#endif
