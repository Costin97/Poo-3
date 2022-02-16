#include "elev.cpp"

int main(){
	int *note;
	note=new int (5);
	note[0]=6;
	note[1]=8;
	note[2]=9;
	note[3]=10;
	note[4]=4;
	Elev e1(note,12,5);
	Elev e2(note,20,5);
	Elev e3(note,0,5);
	cout <<e1;
	e1=e1+e2;
	cout<<e1;
	e1+=e1;
	cout<<e1;
	return 0;
}
