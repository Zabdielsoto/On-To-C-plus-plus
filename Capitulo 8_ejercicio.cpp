#include<iostream>
using namespace std;
int contador=0;
void c_to_f(int cel){
	float result=2*(cel)+30;  //Primera parte del ejercicio
	cout<<"Performing an approximate temperature conversion "; //segunda parte del ejercicio
	result=((cel+40)*9/5)-40; //tercera parte del ejercicio
	cout<<result<<endl;
	contador++;
	cout<<"Las veces que ha sido llamada esta funcion son "<<contador;
}

main(){
	int temp;
	cout<<"Digite temperatura: "; cin>>temp;
	c_to_f(temp);
}
