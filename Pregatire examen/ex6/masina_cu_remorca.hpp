#ifndef MASINA_CU_REMORCA_HPP
#define MASINA_CU_REMORCA_HPP

#include "remorca.cpp"
#include "masina.cpp"

class Masina_cu_remorca:public Remorca,public Masina{
	int masa_totala;
		public:
			Masina_cu_remorca();
			Masina_cu_remorca(int,int[],int[],int,char*,const char*,int);
			~Masina_cu_remorca();
			void afisare();
			int get_Pret();
			bool operator>(Masina_cu_remorca&);
			friend Masina_cu_remorca operator+(Masina_cu_remorca&,Masina_cu_remorca&);
};

#endif
