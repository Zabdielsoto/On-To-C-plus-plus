#include<iostream>
using namespace std;
const double pi=3.14159;

class tank_car{
	public:
		double radius, length;
		tank_car(){radius=3.5; length=40;}
		tank_car(double r, double l){radius=r; length=l;}
		double volume(){return pi*radius*radius*length;}
};

main(){
	tank_car t1;
	tank_car t2 (3.5,50);
	cout<<"The volume of the default tank car is "
		<<t1.volume()
		<<endl
		<<"The volume of the specified tank car is "
		<<t2.volume()
		<<endl;
}
/*Aqui vemos dos funciones constructoras dentro de la
clase, en la funcion por default (la que no tiene
parametros dentro de los parentesis) asignamos valores
a los objetos de la clase creados y a los que no les
asignamos unos valores especificos, esto ocurre con 
todos los objestos que no tienen valores asignados
la otra funcion se llama constructora especifica y le
asigna los valores a los objetos de la clase, estos 
valores si estan especificados en la funcion main, despues
de crear el objeto (t2) se le asignan los valores dentro
de los parentesis que le siguen, estos valores asignados
(3.5,50) son los que s usan n la constructora especifica
posteriormente la funcion volumen hace su operacion
usando los valores dados ya sea por la constructora 
especifica o la por default*/
