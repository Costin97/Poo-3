#include "capre.hpp"

Capre::Capre(){
	this->cantitate_mancare=-1;
	this->tip_mancare=NULL;
	this->nr_animale=-1;
}

Capre::Capre(int m,char* t,int n){
	this->cantitate_mancare=m;
	this->nr_animale=n;
//	if(this->tip_mancare!=NULL){
//		delete[]this->tip_mancare;
//	}
	this->tip_mancare=new char(strlen(t)+1);
	strcpy(this->tip_mancare,t);
}

Capre& Capre::operator=(const Capre& obj){
	this->cantitate_mancare=obj.cantitate_mancare;
	this->nr_animale=obj.nr_animale;
	if(this->tip_mancare!=NULL){
		delete[]this->tip_mancare;
	}
	this->tip_mancare=new char(strlen(obj.tip_mancare)+1);
	strcpy(this->tip_mancare,obj.tip_mancare);
}

int Capre::get_Mancare(){
	return this->cantitate_mancare;
}

char* Capre::get_Tip(){
	return this->tip_mancare;
}

int Capre::get_Numar(){
	return this->nr_animale;
}

Capre::~Capre(){
	delete[]this->tip_mancare;
}

void Capre::afisare(){
	cout<<"Afisare capre:"<<endl;
	cout<<"Cantitate mancare: "<<this->cantitate_mancare<<endl;
	cout<<"Numar de animale: "<<this->nr_animale<<endl;
	cout<<"Tip mancare: "<<this->tip_mancare<<endl;
}
