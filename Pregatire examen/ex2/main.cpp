#include "Cub.cpp"
#include "Par.cpp"
#include "Cil.cpp"
#include "Depozit.cpp"

int main(){
	Depozit **v;
	v=new Depozit*[3];
	v[0]=new Cub(4);
	v[1]=new Par(2,3,5);
	v[2]=new Cil(1,5);
	float volum=0.0;
	for(int i=0;i<3;i++){
		volum+=v[i]->volum();
	}
	cout<<"Volumul este: "<<volum<<endl;
	float sup_max;
	int contor;
	for(int i=0;i<3;i++){
		if(v[i]->suprafata_baza()>sup_max){
			sup_max=v[i]->suprafata_baza();
			contor=i;
		}
	}
	cout<<"Suprafata cea mai mare ocupata de un obiect este de: "<<sup_max<<endl;
	cout<<"Aceasta este ocupata de: "<<endl;
	v[contor]->afisare();
	return 0;
}
