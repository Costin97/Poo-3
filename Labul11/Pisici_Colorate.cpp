#include "Pisici_Colorate.hpp"

Pisici_Colorate::Pisici_Colorate(){
	this->varsta=-1;
	this->nume=NULL;
	this->descriere=NULL;
	this->isVaccin=-1;
}

Pisici_Colorate::Pisici_Colorate(int varsta,char* nume,char* descriere,int isVaccin){
	this->varsta=varsta;
	this->isVaccin=isVaccin;
	this->nume=new char[strlen(nume)+1];
	strcpy(this->nume,nume);
	this->descriere=new char[strlen(descriere)+1];
	strcpy(this->descriere,descriere);
}

Pisici_Colorate::Pisici_Colorate(const Pisici_Colorate& obj){
	this->varsta=obj.varsta;
	this->isVaccin=obj.isVaccin;
	this->nume=new char[strlen(obj.nume)+1];
	strcpy(this->nume,obj.nume);
	this->descriere=new char[strlen(obj.descriere)+1];
	strcpy(this->descriere,obj.descriere);
}

Pisici_Colorate& Pisici_Colorate::operator=(const Pisici_Colorate& obj){
	this->varsta=obj.varsta;
	this->isVaccin=obj.isVaccin;
	this->nume=new char[strlen(obj.nume)+1];
	strcpy(this->nume,obj.nume);
	this->descriere=new char[strlen(obj.descriere)+1];
	strcpy(this->descriere,obj.descriere);
	return *this;
}

void Pisici_Colorate::afisare(){
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

int Pisici_Colorate::getVarsta(){
	return this->varsta;
}

int Pisici_Colorate::isVaccinated(){
	return this->isVaccin;
}

char* Pisici_Colorate::getDescriere(){
	return this->descriere;
}

Pisici_Colorate::~Pisici_Colorate(){
	delete[]this->nume;
	delete[]this->descriere;
}
