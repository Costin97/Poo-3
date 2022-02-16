#include "remorca.hpp"

Remorca::Remorca():Vehicul(){
	for(int i=0;i<3;i++){
		this->dimensiuni[i]=0;
	}
	this->greutate_maxima=-1;
}

Remorca::Remorca(int dim[3],int greu,const char* p,int pret):Vehicul(p,pret){
	this->greutate_maxima=greu;
	for(int i=0;i<3;i++){
		this->dimensiuni[i]=dim[i];
	}
}

Remorca::~Remorca(){
	this->greutate_maxima=-321;
}

void Remorca::afisare(){
	cout<<"Afisare REMORCA:"<<endl;
	cout<<"Dimensiuni:"<<endl;
	for(int i=0;i<3;i++){
		cout<<this->dimensiuni[i]<<" ";
	}
	cout<<endl;
	cout<<"Greutate maxima: "<<this->greutate_maxima<<endl;
	Vehicul::afisare();
}

int Remorca::get_Pret(){
	return Vehicul::get_Pret();
}
	
