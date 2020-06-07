#include<iostream>
using namespace std;

int current_year=2001;
const double pi=3.14159;

//Clase de mayor jerarquia, no depende de ningun otra
class container{
	public:
		int percent_loaded;
		container(){cout<<"Calling container default constructor."<<endl;}
};

//Clase que depende de la clase container (hereda sus variables y funciones)
class box:public container{
	public:
		double height, width, length;
		box(){cout<<"Calling the box default constructor."<<endl;}
		double volume(){return height*width*length;}
};

//clase que depende de la clase container (hereda sus variables y funciones)
class cylinder:public container{
	public:
		double radius, length;
		cylinder(){cout<<"Calling the cylinder default constructor."<<endl;}
		double volume(){return pi*radius*radius*length;}
};

//Clase de mayor jerarquia, no depende de ninguna otra
class railroad_car{
	public:
		int year_built;
		railroad_car(){cout<<"Calling the railroad_car default constructor."<<endl;}
		int age(){return current_year-year_built;}
};

//Clase que hereda las variables y funciones de la clase railroad_car y de la clase box (al depender de la clase box tambien depende de la clase container)
class box_car: public railroad_car, public box{
	public:
		box_car(){cout<<"Calling the box_car default constructor."<<endl;
		height=10.5; width=9.2; length=40.0;}
};

main(){
	box_car b;				//Creamos un box_car asignandole valore en el constructor de la clase box_car
	b.year_built=1943;		//Especificamos cuando fue construido dandole valor a una variable de la clase railroad_car
	b.percent_loaded=66;	//Especificamos que tan lleno esta dandole valor a una variable de la clase container
	cout<<"The car is "<<b.age()<<" years old."<<endl;		//Desplegamos la edad usando una funcion de la clase railroad_car
	cout<<"And "<<b.percent_loaded<<" percent loaded"<<endl;	//Desplegamos que tan lleno esta usando una variabl de la clase container
	cout<<"Its volume is "<<b.volume()<<" units"<<endl;		//Desplegamos el volumen usando una funcion de la clase box
}

/*Aqui se muestran las jerarquias de clases, como se pueden usar las variables y funciones de las clases de mayor jerarquia en las clases
de menor jerarquia*/

