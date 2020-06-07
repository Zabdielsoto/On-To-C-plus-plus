#include<iostream>
using namespace std;
int current_year=2001;
const double pi=3.14159;

class container{
	public:
		int percent_loaded;
		container(){cout<<"Calling container default constructor"<<endl;}
};

class railroad_car{
	public:
		int year_built;
		railroad_car(){cout<<"Calling railroad_car default constructor"<<endl;}
};

class box: public container {
	public:
		double height, width, length;
		box(){cout<<"Calling box default constructor"<<endl;}
		double volume(){return height*width*length;}
};

class cylinder:public container{
	public:
		double radius, length;
		cylinder(){cout<<"Calling cylinder default constructor"<<endl;}
		double volume(){return pi*radius*radius*length;}
};

class box_car:public railroad_car, public box{
	public:
		box_car(){height=10.5; width=9.2; length=40;}
};

class gondola_car: public railroad_car, public box{
	public:
		gondola_car(){height=6; width=9.2; length=40;}
		double volume(){return 1.2*height*width*length;}
};

main(){
	gondola_car g;
	cout<<"Viewed as gondola car, the car's volume is "<<g.volume()<<" units"<<endl;
	cout<<"Viewes as a box, the car's volume is "<<g.box::volume()<<" units"<<endl;
}

/*Aqui podemos ver como en el segundo cout del main se llama directamente a una de las dos funciones de volumen que puede hacer el objeto
gondola_car g, ya que si no se llama directamente, realizaria la funcion que primero encuentre, recorriendo la jerarquia de abajo hacia
arriba, es decir, ejecutaria la funcion volumen de la clase gondola_car como se muestra en el primer cout, en cambio, al llamar 
directamente, se obliga a que ejecute la funcion volumen de la clase box*/
