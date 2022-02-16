#include "ferma.cpp"
#include "vaci.cpp"
#include "gaini.cpp"
#include "cai.cpp"
#include "porci.cpp"
#include "capre.cpp"

int main(){
	Ferma** v;
	v=new Ferma*[5];
	v[0]=new Vaci(30,"nutret",10);
	v[1]=new Gaini(5,"graunte",100);
	v[2]=new Cai(2,"nutret",8);
	v[3]=new Porci(8,"iarba",5);
	v[4]=new Capre(4,"nutret",4);
	
	for(int i=0;i<5;i++){
		v[i]->afisare();
	}
	
	return 0;
}
