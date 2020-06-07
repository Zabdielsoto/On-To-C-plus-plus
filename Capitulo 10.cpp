#include<iostream> 
using namespace std;

const double pi=3.14159;

class box_car{
	public: double height, width, length;
			double volume (){
				return height*width*length;
			}
};

/* Declaramos en public una funcion que pertenece a la clase box_car
pero que como es public, puede ser usada en cualquier parte del programa
esta funcion calcula el volumen y se llama volume, ya no se necesita
poner los parametros que necesita esa funcion entre los parentesis*/

class tank_car{
	public:
		double radius, length;
		double volume(){
			return pi*radius*radius*length;
		}
};

/* Declaramos otra vez una funcion dentro de la clase tank car, al 
ser declarada dentro de una clase diferente no importa que el nombre
sea igual al de la funcion de la clase box car, el programa usa el 
adcuado dependiendo de los parametros con las que se llaman las funciones*/

main(){
	box_car x; x.height=10.5; x.width=9.5; x.length=40;
	tank_car y; y.radius=3.5; y.length=40;
	cout<<"The volume of the box car is "<<x.volume()<<endl
	<<"The volume of the tank car is "<<y.volume()<<endl;
}
