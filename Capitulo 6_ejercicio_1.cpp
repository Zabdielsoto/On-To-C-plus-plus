#include<iostream>
using namespace std;

void sphere(int r){
	cout<<"El volumen de una esfera es con radio "<<r
		<<" es "<<(4/3)*r*r*r*3.1416
		<<" centimetros cubicos"
		<<endl;
}

main(){
	int radio;
	cout<<"Ingrese el radio de la esfera: ";
	cin>>radio;
	sphere(radio);
}
