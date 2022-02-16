#ifndef DEPOZIT_HPP
#define DEPOZIT_HPP

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Depozit{
	public:
		virtual float volum()=0;
		virtual float suprafata_baza()=0;
		virtual void afisare()=0;
};

#endif
