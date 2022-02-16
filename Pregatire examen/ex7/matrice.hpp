#ifndef MATRICE_HPP
#define MATRICE_HPP

#include "fractie.hpp"

class Matrice{
	Fractie **tab;
	int n;
		public:
			Matrice();
			Matrice(Fractie**,int);
			Matrice(int);
			void afisare();
			Matrice& operator=(const Matrice& obj);
			friend istream& operator>>(istream&,Matrice&);
			friend Matrice operator+(const Matrice&,const Matrice&);
			Matrice& operator+=(const Matrice&);
			bool operator==(const Matrice& obj);
			void set_Value(int,int,Fractie);
};

#endif
