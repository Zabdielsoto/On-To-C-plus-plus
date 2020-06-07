#include<iostream>
using namespace std;

void square(int m,int v){
	cout<<"La energia de de una masa de "<<m
		<<" con una velocidad de "<<v
		<<" es de "<<(1/2)*m*v*v<<endl;
}

main(){
	int masa, velocidad=80;
	cout<<"Ingrese la masa: "; cin>>masa;
	square(masa,velocidad);
	velocidad=50;
	square(masa,velocidad);
	cout<<"La diferencia de energias entre una velocidad de 80 y de 50 es de "
		<<((0.5)*masa*80*80)-((0.5)*masa*50*50)<<endl;
}
