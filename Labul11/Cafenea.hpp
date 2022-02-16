#ifndef CAFENEA_HPP
#define CAFENEA_HPP

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Cafenea{
	public:
	virtual void afisare()=0;
	virtual ~Cafenea()=0;
	virtual char* getDescriere()=0;
	virtual int getVarsta()=0;
	virtual int isVaccinated()=0;
};

#endif
