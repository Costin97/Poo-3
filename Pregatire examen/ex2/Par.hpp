//#include "depozit.hpp"
#ifndef PAR_HPP
#define PAR_HPP
class Par:public Depozit{
	float l,L,h;
	public:
		Par();
		Par(float,float,float);
		float volum();
		float suprafata_baza();
		void afisare();
};

#endif
