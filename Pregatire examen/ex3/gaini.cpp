#include "gaini.hpp"

Gaini::Gaini(){
	this->cantitate_mancare=-1;
	this->tip_mancare=NULL;
	this->nr_animale=-1;
}

Gaini::Gaini(int m,char* t,int n){
	this->cantitate_mancare=m;
	this->nr_animale=n;
//	if(this->tip_mancare!=NULL){
//		delete[]this->tip_mancare;
//	}
	this->tip_mancare=new char(strlen(t)+1);
	strcpy(this->tip_mancare,t);
}

Gaini& Gaini::operator=(const Gaini& obj){
	this->cantitate_mancare=obj.cantitate_mancare;
	this->nr_animale=obj.nr_animale;
	if(this->tip_mancare!=NULL){
		delete[]this->tip_mancare;
	}
	this->tip_mancare=new char(strlen(obj.tip_mancare)+1);
	strcpy(this->tip_mancare,obj.tip_mancare);
}

int Gaini::get_Mancare(){
	return this->cantitate_mancare;
}

char* Gaini::get_Tip(){
	return this->tip_mancare;
}

int Gaini::get_Numar(){
	return this->nr_animale;
}

Gaini::~Gaini(){
	delete[]this->tip_mancare;
}

void Gaini::afisare(){
	cout<<"Afisare gaini:"<<endl;
	cout<<"Cantitate mancare: "<<this->cantitate_mancare<<endl;
	cout<<"Numar de animale: "<<this->nr_animale<<endl;
	cout<<"Tip mancare: "<<this->tip_mancare<<endl;
}
