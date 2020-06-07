#include<iostream>
using namespace std;

const double pi=3.14159;
class tank_car{
	public:
		double radius, length;
		//Aqui esta el default constructor
		tank_car(){radius=3.5; length=40;}
		//Funcion volumen
		double volume(){return pi*radius*radius*length;}
};

main(){
	tank_car t;
	cout<<"The volume of the tank car is "<<t.volume()<<endl;
}
/*Podemos ver que aqui ya no es necesario asignarle valores
a t en el segmento main, sino que solo creamos una variable 
para usar en la clase y sus valores son asignados en la
funcion constructora , al final solo se llama la funcion volumen*/
