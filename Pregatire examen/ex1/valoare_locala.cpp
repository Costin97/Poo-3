#include "valoare_locala.hpp"

valoare_locala::valoare_locala(){
	this->temp=-1;
	this->pres=-1;
	this->umid=-1;
}

valoare_locala::valoare_locala(int t,int p,int u){
	this->temp=t;
	this->pres=p;
	this->umid=u;
}

int valoare_locala::getTemp(){
	return this->temp;
}

int valoare_locala::getPres(){
	return this->pres;
}

int valoare_locala::getUmid(){
	return this->umid;
}

valoare_locala& valoare_locala::operator=(const valoare_locala& obj){
	this->temp=obj.temp;
	this->pres=obj.pres;
	this->umid=obj.umid;
}

void valoare_locala::afisare(){
	cout<<"Temperatura: "<<this->temp<<",Presiune: "<<this->pres<<",Umiditate: "<<this->umid<<endl;

}
