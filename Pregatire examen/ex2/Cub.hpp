#include "depozit.hpp"
#ifndef CUB_HPP
#define CUB_HPP

class Cub:public Depozit{
	protected:
		float lat;
	public:
		Cub();
		Cub(float);
		float volum();
		float suprafata_baza();
		void afisare();
};

#endif
