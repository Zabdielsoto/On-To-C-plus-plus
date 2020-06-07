#include<iostream>
using namespace std;

const double pi=3.14159;
class box_car {public: double height, width, length;};
class tank_car {public: double radius, length;};

double volume(box_car b){
	return b.height*b.width*b.length;
}

double volume(tank_car t){
	return pi*t.radius*t.length;
}

main(){
	box_car x; x.height=10.5; x.width=9.5; x.length=40;
	tank_car y; y.radius=3.5; y.length=40;
	cout<<"The volume of the box car is "<<volume(x)<<endl
		<<"The volume of the tank car is "<<volume(y)<<endl;
}

/*Usamos lo que es llamado overloaded de funciones, donde
usamos la misma funcion pero con las variables de cada
clase y el programa es el que decide adecuadamente que
tipo de la funcion se necesita usar segun las variables que 
se le asignan*/ 
