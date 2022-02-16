#include "ecran_multiplu.hpp"

Ecran_multiplu::Ecran_multiplu(){
	this->v=NULL;
	this->n=-1;//coloane
	this->m=-2;//linii
}

int Ecran_multiplu::get_Linii(){
	return this->m;
}

int Ecran_multiplu::get_Coloane(){
	return this->n;
}

Ecran_multiplu::Ecran_multiplu(int m,int n){
	this->n=n;
	this->m=m;
	this->v=new Pixel**[this->m,this->n];
	for(int i=0;i<this->m;i++){
		this->v[i]=new Pixel*[this->n];}
	
	for(int i=0;i<this->m;i++){
		for(int j=0;j<this->n;j++){
			v[i][j]=new Pixel(i+2);
		}
	}

}

Ecran_multiplu& Ecran_multiplu::operator=(const Ecran_multiplu& obj){
	this->n=obj.n;
	this->m=obj.m;
	this->v=new Pixel**[this->m,this->n];
	for(int i=0;i<this->m;i++){
		this->v[i]=new Pixel*[this->n];}
	
	for(int i=0;i<this->m;i++){
		for(int j=0;j<this->n;j++){
			v[i][j]=obj.v[i][j];
		}
	}
}

Ecran_multiplu::Ecran_multiplu(const Ecran_multiplu& obj){
	this->n=obj.n;
	this->m=obj.m;
	this->v=new Pixel**[this->m,this->n];
	for(int i=0;i<this->m;i++){
		this->v[i]=new Pixel*[this->n];}
	
	for(int i=0;i<this->m;i++){
		for(int j=0;j<this->n;j++){
			v[i][j]=obj.v[i][j];
		}
	}
}

Ecran_multiplu& Ecran_multiplu::operator+(const Ecran_multiplu& obj){
//	cout<<"O sa adun indexul de culoare din fiecare pixel"<<endl;
	for(int i=0;i<this->m;i++){
		for(int j=0;j<this->n;j++){
			int s=this->v[i][j]->get_Culoare()+obj.v[i][j]->get_Culoare();
//			cout<<"s este: "<<s;
			this->v[i][j]->set_Culoare(s);
		}
	}
	return *this;
}

ostream& operator<<(ostream& out,Ecran_multiplu& obj){
	out<<"Afisarea: "<<endl;
	for(int i=0;i<obj.get_Linii();i++){
		for(int j=0;j<obj.get_Coloane();j++){
			out<<obj.v[i][j]->get_Culoare()<<" ";
		}
		out<<endl;
	}
	return out;
}
