#ifndef BAZA_HPP
#define BAZA_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Baza{
	public:
	virtual ~Baza()=0;
	virtual void afisare()=0;
	virtual int get_Pret()=0;
};

#endif
