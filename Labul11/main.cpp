#include "Pisici_albe.cpp"
#include "Pisici_Negre.cpp"
#include "Pisici_Colorate.cpp"
#include "Cafenea.cpp"

int main(){
	Cafenea **v;
	v=new Cafenea*[10];
	char *p;
	v[0]=new Pisici_Negre(2,"Kitty","Este o pisica neagra,tanara si draguta.",1);
	v[1]=new Pisici_Albe(1,"Missa","Este o pisica alba,artagoasa sau iubitoare,depinde de vreme.",1);
	v[2]=new Pisici_Colorate(3,"Tidda","Este o pisica colorata,si dragalasa.",0);
	v[3]=new Pisici_Negre(5,"Kappa","Este o pisica neagra si cam atat :).",0);
	v[4]=new Pisici_Albe(8,"Vamma","Este o pisica alba si jucausa.",1);
	v[5]=new Pisici_Colorate(2,"Leila","Este o pisica colorata si vesela.",0);
	v[6]=new Pisici_Negre(1,"Nikka","Este o pisica neagra cu pete albicioase.",1);
	v[7]=new Pisici_Albe(9,"Melissa","Este o pisica alba si rautacioasa,dar iubareata.",1);
	v[8]=new Pisici_Colorate(0,"Vanessa","Este o pisica colorata vioi.",0);
	v[9]=new Pisici_Colorate(3,"Lella","Este o pisica colorata si foarte foarte iubitoare.",1);
	for(int i=0;i<3;i++){
		v[i]->afisare();
	}
	int zile=0,capacitate=300;
	while(capacitate>150){
		zile++;
		capacitate=capacitate-5+3;
	}
	cout<<"In "<<zile<<" de zile cafeneaua are o ocupare a locurilor <=50%"<<endl;
	zile=0,capacitate=300;
	int cantitate_mancare=0;
	while(zile<100){
		zile++;
		capacitate=capacitate-2;
		cantitate_mancare=cantitate_mancare+100+capacitate;
	}
	cout<<"In 100 de zile va fi consumata o cantitate de: "<<cantitate_mancare<<" grame!"<<endl;
	int cat_1=0,cat_2=0,cat_3=0,vac_1=0,vac_2=0,vac_3=0,n=0,a=0,c=0;
	for(int i=0;i<10;i++){
		if(v[i]->getVarsta()<1){
			if(strstr(v[i]->getDescriere(),"neagra")!=NULL){
				n++;
			}else if(strstr(v[i]->getDescriere(),"alba")!=NULL){
				a++;
			}else if(strstr(v[i]->getDescriere(),"colorata")!=NULL){
				c++;
			}
			cat_1++;
			if(v[i]->isVaccinated()==1){
				vac_1++;
			}
		}else if(v[i]->getVarsta()>=1&&v[i]->getVarsta()<=3){
			cat_2++;
			if(strstr(v[i]->getDescriere(),"neagra")!=NULL){
				n++;
			}else if(strstr(v[i]->getDescriere(),"alba")!=NULL){
				a++;
			}else if(strstr(v[i]->getDescriere(),"colorata")!=NULL){
				c++;
			}
			if(v[i]->isVaccinated()==1){
				vac_2++;
			}
		}else if(v[i]->getVarsta()>3){
			cat_3++;
			if(strstr(v[i]->getDescriere(),"neagra")!=NULL){
				n++;
			}else if(strstr(v[i]->getDescriere(),"alba")!=NULL){
				a++;
			}else if(strstr(v[i]->getDescriere(),"colorata")!=NULL){
				c++;
			}
			if(v[i]->isVaccinated()==1){
				vac_3++;
			}
		}
	}
	cout<<"Sunt "<<cat_1<<" pisici intre 0-1 ani, "<<" si "<<vac_1<<" au vaccinul facut,"<<" sunt "<<cat_2<<" pisici intre 1-3 ani si "<<vac_2<<" au vaccinul facut,sunt "<<cat_3<<" pisici peste 3 ani si "<<vac_3<<" au vaccinul facut."<<endl<<endl;
	cout<<"Sunt "<<n<<" pisici negre, "<<a<<" pisici albe, "<<c<<" pisici colorate"<<endl<<endl;
	Cafenea* aux;
	for(int i=0;i<9;i++){
		for(int j=i+1;j<10;j++){
			if(strlen(v[i]->getDescriere())<strlen(v[j]->getDescriere()))
			{
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
	cout<<"Tot 3 dupa descriere este:"<<endl<<endl;
	for(int i=0;i<3;i++){
		v[i]->afisare();
	}
	return 0;
}
