#include "vehicul.hpp"

Vehicul::Vehicul(){
	this->proprietar=NULL;
	this->pret=-1;
}

Vehicul::Vehicul(const char *p,int pret){
	this->proprietar=new char(strlen(p)+1);
	strcpy(this->proprietar,p);
	this->pret=pret;
}

int Vehicul::get_Pret(){
	return this->pret;
}

Vehicul::~Vehicul(){
	delete[]this->proprietar;
}

void Vehicul::afisare(){
	cout<<"Afisare vehicul: "<<endl;
	cout<<"Proprietar: "<<this->proprietar<<endl;
	cout<<"Pret: "<<this->pret<<endl;
}
