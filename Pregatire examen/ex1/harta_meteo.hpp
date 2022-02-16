#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

#include "valoare_locala.cpp"

class harta_meteo{
	int m;
	int n;
	valoare_locala **a;
		public:
			harta_meteo();
			harta_meteo(int,int);
			harta_meteo(const harta_meteo&);
			harta_meteo& putVal(int,int,valoare_locala&);
			valoare_locala& getVal(int,int);
			harta_meteo& operator=(const harta_meteo&);
			friend ostream& operator<<(ostream&,const harta_meteo&);
			int* valMed(int,int,int,int);
			void afisare();
};
