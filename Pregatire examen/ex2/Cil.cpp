#include "Cil.hpp"

Cil::Cil(){
	this->r=-1;
	this->h=-1;
}

Cil::Cil(float r,float h){
	this->r=r;
	this->h=h;
}

float Cil::volum(){
	float volum;
	volum=this->r*this->r*3.14*this->h;
	return volum;
}

float Cil::suprafata_baza(){
	float arie;
	arie=this->r*2*3.14;
	return arie;
}

void Cil::afisare(){
	cout<<"Cilindru"<<endl;
	cout<<"Raza: "<<this->r<<endl;
	cout<<"Inaltime: "<<this->h<<endl;
}
