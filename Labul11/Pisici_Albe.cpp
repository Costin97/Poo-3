#include "Pisici_Albe.hpp"

Pisici_Albe::Pisici_Albe(){
	this->varsta=-1;
	this->nume=NULL;
	this->descriere=NULL;
	this->isVaccin=-1;
}

Pisici_Albe::Pisici_Albe(int varsta,char* nume,char* descriere,int isVaccin){
	this->varsta=varsta;
	this->isVaccin=isVaccin;
	this->nume=new char[strlen(nume)+1];
	strcpy(this->nume,nume);
	this->descriere=new char[strlen(descriere)+1];
	strcpy(this->descriere,descriere);
}

Pisici_Albe::Pisici_Albe(const Pisici_Albe& obj){
	this->varsta=obj.varsta;
	this->isVaccin=obj.isVaccin;
	this->nume=new char[strlen(obj.nume)+1];
	strcpy(this->nume,obj.nume);
	this->descriere=new char[strlen(obj.descriere)+1];
	strcpy(this->descriere,obj.descriere);
}

Pisici_Albe& Pisici_Albe::operator=(const Pisici_Albe& obj){
	this->varsta=obj.varsta;
	this->isVaccin=obj.isVaccin;
	this->nume=new char[strlen(obj.nume)+1];
	strcpy(this->nume,obj.nume);
	this->descriere=new char[strlen(obj.descriere)+1];
	strcpy(this->descriere,obj.descriere);
	return *this;
}

void Pisici_Albe::afisare(){
	cout<<"Afisare informatie pisica neagra: "<<endl;
	cout<<"Varsta: "<<this->varsta<<endl;
	cout<<"Nume: "<<this->nume<<endl;
	cout<<"Descriere: "<<this->descriere<<endl;
	cout<<"Este vaccinata pisica?"<<endl;
	if(isVaccin==1){
		cout<<"DA!"<<endl;
	}else{
		cout<<"NU!"<<endl;
	}
}

int Pisici_Albe::getVarsta(){
	return this->varsta;
}

int Pisici_Albe::isVaccinated(){
	return this->isVaccin;
}

char* Pisici_Albe::getDescriere(){
	return this->descriere;
}

Pisici_Albe::~Pisici_Albe(){
	delete[]this->nume;
	delete[]this->descriere;
}
