#include "masina.hpp"

Masina::Masina():Vehicul(){
	for(int i=0;i<3;i++){
		this->dimensiuni[i]=0;
	}
	this->marca=NULL;
}

Masina::Masina(int dim[3],char* m,const char* p,int pret):Vehicul(p,pret){
	for(int i=0;i<3;i++){
		this->dimensiuni[i]=dim[i];
	}
	this->marca=new char[strlen(m)+1];
	strcpy(this->marca,m);
}

Masina::~Masina(){
	delete[]this->marca;
}

void Masina::afisare(){
	cout<<"Afisare MASINA:"<<endl;
	cout<<"Dimensiuni:"<<endl;
	for(int i=0;i<3;i++){
		cout<<this->dimensiuni[i]<<" ";
	}
	cout<<endl;
	cout<<"Marca: "<<this->marca<<endl;
	Vehicul::afisare();
}

int Masina::get_Pret(){
	return Vehicul::get_Pret();
}
