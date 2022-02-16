#include "masina_cu_remorca.hpp"

Masina_cu_remorca::Masina_cu_remorca():Remorca(),Masina(),Vehicul(){
	this->masa_totala=-1;
}

Masina_cu_remorca::Masina_cu_remorca(int masa,int dim_r[3],int dim_m[3],int greut,char *m,const char *p,int pret):Remorca(dim_r,greut,p,pret),Masina(dim_m,m,p,pret),Vehicul(p,pret){
	this->masa_totala=masa;
}

Masina_cu_remorca::~Masina_cu_remorca(){
	this->masa_totala=-5;
}

void Masina_cu_remorca::afisare(){
	cout<<"Afisare MASINA_CU_REMORCA:"<<endl<<endl;
	cout<<"Masa totala este: "<<this->masa_totala<<endl;
	Remorca::afisare();
	Masina::afisare();
	Vehicul::afisare();
}

bool Masina_cu_remorca::operator>(Masina_cu_remorca& obj){
	if(this->Vehicul::get_Pret()>obj.Vehicul::get_Pret()){
		return 1;
	}
	else return 0;
}

Masina_cu_remorca operator+(Masina_cu_remorca& obj1,Masina_cu_remorca& obj2){
	Masina_cu_remorca aux;
	aux.masa_totala=obj1.masa_totala+obj2.masa_totala;
	return aux;
}

int Masina_cu_remorca::get_Pret(){
	return Vehicul::get_Pret();
}
