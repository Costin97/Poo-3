#ifndef FERMA_HPP
#define FERMA_HPP

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Ferma{
	int capacitate_depozit;
		public:
			virtual void afisare()=0;
			virtual ~Ferma()=0;
			virtual int get_Mancare()=0;
			virtual char* get_Tip()=0;
			virtual int get_Numar()=0;
};

#endif
