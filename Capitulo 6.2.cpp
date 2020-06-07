#include<iostream>
using namespace std;

//definimos una funcion con el mismo nombre pero usando los parametros de tipo entero
void display_box_car_volume (int h, int w, int l){
	cout<<"The integer volume of the box car is "
		<<h*w*l
		<<endl;
}

//definimos una funcion con el mismo nombre pero ahora usando parametros de tipo double o flotante
void display_box_car_volume (double h, double w, double l){
	cout<<"The floating-point volume of the box car is "
		<<h*w*l
		<<endl;		
}

main(){
	int int_height=11,
		int_width=9,
		int_length=40;
	double double_height=10.5,
			double_width=9.5,
			double_length=40.0;
	display_box_car_volume(int_height, int_width, int_length);
	display_box_car_volume(double_height, double_width, double_length);	
}

/*
el usar dos funciones que se llaman igual pero que usan
diferentes tipos de parametros se llama a una funcion
que esta overloaded, en este tipo de funciones al 
llamarlas en main, se detecta automaticamente que tipo de 
variables se le esta ingresando a los parametros y ejecutara
la funcion adecuada 
*/
