#include<iostream>
using namespace std;

class box_car{
	public: double height, width, length;
};

double volume(box_car b){
	return b.height*b.width*b.length;
}

main(){
	box_car x;
	x.height=10.5; x.width=9.5; x.length=40;
	cout<<"The volume of the box_car is "
		<<volume(x)<<endl;
}
/*
Aqui declaramos la variable ben funcion de las tres variables
de la clase con lo cual solo usamos una variable en la 
funcion, tambien tenemos que hacer lo mismo con la sola
variable x en main	
*/
