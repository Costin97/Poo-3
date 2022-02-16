#include "elev.hpp"

Elev::Elev(){
	this->note=NULL;
	this->nr_catalog=-1;
	this->nr_note=-1;
}

Elev::Elev(int *n,int catalog,int no){
	this->nr_note=no;
	this->note=new int(nr_note);
	for (int i=0;i<this->nr_note;i++){
		this->note[i]=n[i];
	}
	this->nr_catalog=catalog;
}

Elev::Elev(const Elev& obj){
	this->nr_note=obj.nr_note;
	this->note=new int(nr_note);
	for (int i=0;i<this->nr_note;i++){
		this->note[i]=obj.note[i];
	}
	this->nr_catalog=obj.nr_catalog;
}

Elev& Elev::operator=(const Elev& obj){
	cout<<"A intrat in egal"<<endl<<endl;
	this->nr_note=obj.nr_note;
	this->note=new int(nr_note);
	for (int i=0;i<this->nr_note;i++){
		this->note[i]=obj.note[i];
	}
	this->nr_catalog=obj.nr_catalog;
}

ostream& operator<<(ostream& out,const Elev& obj){
	out<<"Afisare obiect: "<<endl;
	out<<"Numar de note: "<<obj.nr_note<<endl;
	out<<"Numar de la catalog: "<<obj.nr_catalog<<endl;
	out<<"Afisarea notelor: "<<endl;
	for(int i=0;i<obj.nr_note;i++){
		out<<"Nota "<<i+1<<": "<<obj.note[i]<<endl;
	}
	return out;
}

float Elev::get_Medie(){
	float s=0.0;
	for(int i=0;i<this->nr_note;i++){
		s+=this->note[i];
	}
	s=(float)s/nr_note;
	return s;
}

int Elev::get_NrCatalog(){
	return this->nr_catalog;
}

Elev operator+(const Elev& obj1,const Elev& obj2){
	Elev suma;
	suma=obj1;
	suma.nr_catalog=suma.nr_catalog+obj2.nr_catalog;
//	this->nr_note=this->nr_note+obj.nr_note;
	return suma;
}

Elev operator-(const Elev& obj1,const Elev& obj2){
	Elev diferenta;
	diferenta.nr_catalog=obj1.nr_catalog-obj2.nr_catalog;
	return diferenta;
}

Elev& Elev::operator+=(const Elev& obj1){
	*this=*this+obj1;
	return *this;
}

bool Elev::operator<(const Elev& obj2){
	if(this->nr_catalog<obj2.nr_catalog){
		return 0;
	}else{
		return 1;
	}
}
