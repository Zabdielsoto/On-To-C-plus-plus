#include<iostream>
using namespace std;

//Declaramos la clase llamada box_car que tiene solo tres 
//variables de tipo double llamadas height, width y length
//estas variables son publicas, es decir que pueden ser
//usadas en cualquier parte del codigo
class box_car {
	public: double height, width, length;
};

/*Declaramos una funcion de tipo double llamada box_car_volume
que solo calcula el volumen y que ocupa unas variables de 
tipo double llamadas h, w, l
*/
double box_car_volume (double h, double w, double l){
	return h*w*l;
}


//Es la funcion main
main (){
	box_car x; //Creamos una variable llamada x que sera usada 
				//en la clase box_car
	x.height = 10.5; //A la variable x creada previamente le
					//asignamos un valor para la variable height
					//de la clase
	x.width = 9.5;//A la variable x le asignamos un valor usado
				//en la variable width de la clase
	x.length = 40; //A la variable x le asignamos un valor para
					//ser usado por la variable length de la clase
	cout<<"The volume of the box_car is "
		<<box_car_volume(x.height,x.width,x.length)
		<<endl;
}
