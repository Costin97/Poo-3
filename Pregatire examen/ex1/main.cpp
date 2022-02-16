#include "harta_meteo.cpp"
//#include "valoare_locala.cpp"

int main(){
	harta_meteo p,o(4,4),k(2,2);
	valoare_locala x(3,5,7);
	
//	p.afisare();
	p=o;
	cout<<p<<endl<<endl<<endl;
//	p=k;
//	cout<<k<<endl<<endl<<endl;
	p.putVal(1,1,x);
	int *v=p.valMed(1,1,3,3);
	cout<<"Valorile medii sunt:"<<endl;
	cout<<"Temperatura medie este: "<<v[0]<<",presiunea medie este: "<<v[2]<<",umiditatea medie este: "<<v[1]<<endl<<endl;
	cout<<p;
	return 0;
}
