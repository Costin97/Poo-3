#include <iostream>
#include <cstring>
#include <fstream>

class valoare_locala{
	int temp;
	int pres;
	int umid;
		public:
			valoare_locala();
			valoare_locala(int,int,int);
			valoare_locala& operator=(const valoare_locala&);
			void afisare();
			int getTemp();
			int getPres();
			int getUmid();
};
