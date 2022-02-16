#include "masina_cu_remorca.cpp"

int main(){
	Baza**v;
	Baza *aux;
	v=new Baza*[5];
	int dim_r1[3]={3,3,3};
	int dim_m1[3]={4,4,4};
	int dim_r2[3]={5,6,7};
	int dim_m2[3]={7,9,10};
	int dim_r3[3]={1,1,1};
	int dim_m3[3]={2,2,2};

	v[0]=new Masina_cu_remorca(10,dim_r1,dim_m1,5000,"Fiat","Adi",4000);
	v[1]=new Remorca(dim_r2,2500,"Viorel",3500);
	v[2]=new Masina(dim_m2,"Audi","Costi",10000);
	v[3]=new Vehicul("Geo",2670);
	v[4]=new Masina_cu_remorca(25,dim_r3,dim_m3,7000,"VW","Ion",9000);
	
//	v[0]->afisare();
//	v[1]->afisare();
//	v[2]->afisare();
//	v[3]->afisare();

//	for(int i=0;i<5-1;i++)
//		for(int j=i+1;j<5;j++){
//			if(v[i]->get_Pret()>v[j]->get_Pret()){
//				cout<<"intra";
//				aux=v[i];
//				v[i]=v[j];
//				v[j]=aux;
//			}
//	}
//	v[0]->afisare();
//	v[1]->afisare();
//	v[2]->afisare();
//	v[3]->afisare();
int rez=v[4]>v[1];
cout<<"Raspunsul la boolean este: "<<rez<<endl;

Masina_cu_remorca suma,ob1(10,dim_r1,dim_m1,5000,"Fiat","Adi",4000),ob2(25,dim_r3,dim_m3,7000,"VW","Ion",9000);
suma=ob1+ob2;
suma.afisare();
	return 0;
}
