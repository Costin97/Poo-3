#include "fractie.hpp"

Fractie::Fractie(){
	this->numitor=-1;
	this->numarator=-1;
}

Fractie::Fractie(int numi,int numa){
	this->numitor=numi;
	this->numarator=numa;
}

int Fractie::get_Numarator(){
	return this->numarator;
}

int Fractie::get_Numitor(){
	return this->numitor;
}

float Fractie::get_Raport(){
	float r;
//	cout<<"Numarator:"<<this->numarator<<endl;
//	cout<<"Numitorul:"<<this->numitor<<endl;
	r=(float)this->numarator/this->numitor;
//	cout<<r;
	return r;
}

istream& operator>>(istream& in,Fractie& obj){
	cout<<"Numaratorul:";
	in>>obj.numarator;
	cout<<endl;
	cout<<"Numitorul:";
	in>>obj.numitor;
	cout<<endl;
	return in;
}

void Fractie::afisare(){
	cout<<"Afisare:"<<endl;
	cout<<"Numaratorul:"<<this->numarator<<endl;
	cout<<"Numitorul:"<<this->numitor<<endl;
}

void Fractie::set_Valoare(Fractie obj){
	this->numarator=obj.get_Numarator();
	this->numitor=obj.get_Numitor();
}
