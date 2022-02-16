#include "Cub.hpp"

Cub::Cub(){
	this->lat=-1;
}

Cub::Cub(float lat){
	this->lat=lat;
}

float Cub::volum(){
	float arie;
	arie=this->lat*this->lat*this->lat;
	return arie;
}

float Cub::suprafata_baza(){
	float arie;
	arie=6*this->lat*this->lat;
	return arie;
}

void Cub::afisare(){
	cout<<"Cub"<<endl;   
	cout<<"Latura:"<<this->lat<<endl;
}
