#ifndef CIL_HPP
#define CIL_HPP
#include "depozit.hpp"

class Cil:public Depozit{
	float r,h;
	public:
		Cil();
		Cil(float,float);
		float volum();
		float suprafata_baza();
		void afisare();
};

#endif
