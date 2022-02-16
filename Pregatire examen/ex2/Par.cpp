#include "Par.hpp"

Par::Par(){
	this->l=-1;
	this->L=-1;
	this->h=-1;
}

Par::Par(float l,float L,float h){
	this->l=l;
	this->L=L;
	this->h=h;
}

float Par::volum(){
	float volum;
	volum=this->L*this->h*this->l;
	return volum;
}

float Par::suprafata_baza(){
	float arie;
	arie=231312;
	return arie;
}

void Par::afisare(){
	cout<<"Paralelipiped"<<endl;
	cout<<"Lungime: "<<this->L<<endl;
	cout<<"Latime: "<<this->l<<endl;
	cout<<"Inaltime: "<<this->h<<endl;
}
