#include "matrice.hpp"

Matrice::Matrice(){
	this->tab=NULL;
	this->n=-1;
}

Matrice::Matrice(int n){
	this->n=n;
	this->tab=new Fractie*[this->n,this->n];
	for(int i=0;i<this->n;i++){
		this->tab[i]=new Fractie[this->n];
		for(int j=0;j<this->n;j++){
			this->tab[i][j]=new Fractie(i+5,j+5);
		}
	}
}

Matrice::Matrice(Fractie** t,int n){
	this->n=n;
	this->tab=new Fractie*[this->n,this->n];
	for(int i=0;i<this->n;i++){
		this->tab[i]=new Fractie[this->n];
		for(int j=0;j<this->n;j++){
			this->tab[i][j]=new Fractie(t[i][j]->get_Numitor(),t[i][j]->get_Numarator());
		}
	}
}

void Matrice::afisare()
{
	cout<<"Afisare matrice:"<<endl;
					cout<<"Intra";
	for(int i=0;i<this->n;i++){
		for(int j=0;j<this->n;j++){
				cout<<"Intra";
//			cout<<this->tab[i][j]->get_Raport()<<" ";
			cout<<this->tab[i][j]->get_Numarator()<<"/"<<this->tab[i][j]->get_Numitor()<<" ";
		}
		cout<<endl;
	}
}

Matrice& Matrice::operator=(const Matrice& obj){
	this->n=obj.n;
	if(this->tab!=NULL){
		delete[]this->tab;
	}
	this->tab=new Fractie**[this->n,this->n];
	for(int i=0;i<this->n;i++){
		this->tab[i]=new Fractie*[this->n];
		for(int j=0;j<this->n;j++){
			this->tab[i][j]=new Fractie(obj.tab[i][j]->get_Numitor(),obj.tab[i][j]->get_Numarator());
		}
	}
}

istream& operator>>(istream& in,Matrice& obj){
	cout<<"Citirea lui n:";
	in>>obj.n;
	cout<<endl;
	obj.tab=new Fractie**[obj.n,obj.n];
	for(int i=0;i<obj.n;i++){
		obj.tab[i]=new Fractie*[obj.n];
	}
	for(int i=0;i<obj.n;i++){
		for(int j=0;j<obj.n;j++){
			in>>(Fractie&)obj.tab[i][j];
		}
	}
	cout<<"Afisare:"<<endl;
	for(int i=0;i<obj.n;i++){
		for(int j=0;j<obj.n;j++){
//			cout<<this->tab[i][j]->get_Raport()<<" ";
			cout<<obj.tab[i][j]->afisare();
		}
		cout<<endl;
	}
	return in;
}

Matrice operator+(const Matrice& obj1,const Matrice& obj2){
	Matrice aux;
	aux.n=obj1.n;
	aux.tab=new Fractie**[aux.n,aux.n];
	for(int i=0;i<aux.n;i++){
		aux.tab[i]=new Fractie*[aux.n];
		for(int j=0;j<aux.n;j++){
			aux.tab[i][j]=new Fractie(obj1.tab[i][j]->get_Numitor()+obj2.tab[i][j]->get_Numitor(),obj1.tab[i][j]->get_Numarator()+obj2.tab[i][j]->get_Numarator());
		}
	}
	return aux;
}

Matrice& Matrice::operator+=(const Matrice& obj1){
	*this=*this+obj1;
	return *this;
}

bool Matrice::operator==(const Matrice& obj1){
	for(int i=0;i<this->n;i++){
		for(int j=0;j<this->n;j++){
			if(obj1.tab[i][j]->get_Raport()!=this->tab[i][j]->get_Raport()){
				cout<<obj1.tab[i][j]->get_Raport()<<" "<<this->tab[i][j]->get_Raport()<<endl;
						return 0;
			}
		}
	}
	return 1;
}

void Matrice::set_Value(int i,int j,Fractie obj){
	this->tab[i][j]->set_Valoare(obj);
}
