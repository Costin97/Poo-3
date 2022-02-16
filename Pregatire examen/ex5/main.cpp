#include "ecran_multiplu.cpp"
#include "pixel.cpp"


int main(){
	Ecran_multiplu a(3,3),b(a);
	cout<<a;
	cout<<b;
	a+b;
	cout<<a;
	return 0;
}
