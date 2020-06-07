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

class sphere:public container{
	public:
		double radius;
		sphere(){radius=2;}
		double volumen(){return 1.33*pi*radius*radius*radius;}
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
sphere s;
cout<<"El volumen de una esfera con valores por default es:"
	<<s.volumen()<<endl;
sphere s1;
s1.radius=6;
cout<<"El columen de una esfera con valores asignados es: "
	<<s1.volumen()<<endl;	
}

