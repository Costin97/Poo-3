#include "harta_meteo.hpp"

harta_meteo::harta_meteo(){
	this->m=-1;
	this->n=-1;
	this->a=NULL;
}

harta_meteo::harta_meteo(int m,int n){
	valoare_locala o(1,2,3);
	this->m=m;
	this->n=n;
	this->a=new valoare_locala*[this->m];
	for(int i=0;i<m;i++){
		this->a[i]=new valoare_locala[this->n];
	}
	for(int i=0;i<this->m;i++){
		for(int j=0;j<this->n;j++)
			this->a[i][j]=o;
	}
}

valoare_locala& harta_meteo::getVal(int i,int j){
	return this->a[i][j];
}

harta_meteo& harta_meteo::operator=(const harta_meteo& obj){
	cout<<"Intra in meteo"<<endl;
	this->m=obj.m;
	this->n=obj.n;
	this->a=new valoare_locala*[this->m];
	for(int i=0;i<m;i++){
		this->a[i]=new valoare_locala[this->n];
	}
	for(int i=0;i<this->m;i++){
		for(int j=0;j<this->n;j++)
			this->a[i][j]=obj.a[i][j];
	}
}

harta_meteo::harta_meteo(const harta_meteo& obj){
	this->m=obj.m;
	this->n=obj.n;
	if(this->a!=NULL){
		this->a=NULL;
	}
	this->a=new valoare_locala*[this->m];
	for(int i=0;i<m;i++){
		this->a[i]=new valoare_locala[this->n];
	}
	for(int i=0;i<this->m;i++){
		for(int j=0;j<this->n;j++)
			this->a[i][j]=obj.a[i][j];
	}
}

harta_meteo& harta_meteo::putVal(int i,int j,valoare_locala& obj){
	this->a[i][j]=obj;
	return *this;
}

void harta_meteo::afisare(){
	for(int i=0;i<this->m;i++){
		for(int j=0;j<this->n;j++){
			cout<<"Linia "<<i<<" Coloana "<<j<<" :";
			this->a[i][j].afisare();
			cout<<endl;
		}
		cout<<endl;
	}
}

int *harta_meteo::valMed(int lin1,int col1,int lin2,int col2){
	int *v=new int[3],nr_elem=0,temp=0,umid=0,pres=0;
	for(int i=lin1;i<=lin2;i++){
		for(int j=col1;j<=col2;j++){
			nr_elem++;
			temp+=this->a[i][j].getTemp();
			umid+=this->a[i][j].getUmid();
			pres+=this->a[i][j].getPres();
		}
	}
	temp=temp/nr_elem;
	cout<<"Umiditate:"<<umid<<endl;
	umid=umid/nr_elem;
	pres=pres/nr_elem;
	v[0]=temp;
	v[1]=umid;
	v[2]=pres;
//	cout<<"Numarul de elemente este: "<<nr_elem;

	return v;
}

ostream& operator<<(ostream& out,const harta_meteo& obj){
	out<<"Afisarea obiectului de tip harta_meteo:"<<endl;
	for(int i=0;i<obj.m;i++){
		for(int j=0;j<obj.n;j++){
			out<<"Linia "<<i<<" Coloana "<<j<<" :";
			out<<"Temperatura: "<<obj.a[i][j].getTemp()<<",Presiune: "<<obj.a[i][j].getPres()<<",Umiditate: "<<obj.a[i][j].getUmid()<<endl;
		}
	}
	out<<endl<<endl<<endl;
	return out;
}
