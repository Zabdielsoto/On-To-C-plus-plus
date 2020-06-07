#include<iostream>
using namespace std;
//Definimos la funcion aparte de main que va a realizar el calculo del volumen
int box_car_volume (int h, int w, int l){
	return h*w*l;
}
/*
int es el data type del valor que va a retornar la funcion
box_car_volume es el nombre de la funcion
int h,int w,int l son los parametros con los que va a 
trabajar la funcion, se declara su data type y su nombre
todos deben de tener su data type aunque sean los mismos
y se separan por commas
return es el valor que va a mandar la funcion una vez que
acabe
*/

//definimos la funcion main
main(){
	int height=11, width=9, length=40, stretch=10;
	cout<<"The volume of the standard box car is "
		<<box_car_volume (height,width,length)
		<<endl
		<<"The volume of a stretched box car is "
		<<box_car_volume(height,width,length+stretch)
		<<endl;
}
/*
para mandar llamar una funcion dentro del main y que 
te de el valor que va a retornar se pone solo el
nombre de la funcion y entre parentesis el dato o la variable
declaradas dentro de main a la que se van a asociar los parametros
de la funcion aparte, box_car en este caso, por ejemplo
h toma el valor de height, w toma el valor de width
y l toma el valor de length o de length+stretch segun sea el caso
*/
