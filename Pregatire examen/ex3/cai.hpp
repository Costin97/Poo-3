#ifndef CAI_HPP
#define CAI_HPP

#include "ferma.hpp"

class Cai:public Ferma{
	int cantitate_mancare;
	char *tip_mancare;
	int nr_animale;
		public:
			Cai();
			Cai(int,char*,int);
			Cai& operator=(const Cai&);
			void afisare();
			int get_Mancare();
			char* get_Tip();
			int get_Numar();
			~Cai();
};

#endif
