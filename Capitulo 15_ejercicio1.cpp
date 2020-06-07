#include<iostream>
using namespace std;

class container{
	public:
		int percent_loaded;
		container(){cout<<"Cargando la funcion constructora de container"<<endl;}	
};

class railroad_car{
	public:
		int year_built;
		railroad_car(){cout<<"Cargando la funcion constructora de railroad car"<<endl;}
};

class box:public container{
	public:
		double height, width, length;
		box(){cout<<"Llamando la funcion constructora de box"<<endl;}
		double volumen(){return height*width*length;}
};

class flat_car:public railroad_car,public box{
	public:
		flat_car(){height=3; width=4; length=5;}
};

main(){
	flat_car f;
	cout<<"El volumen con los valores por default es: "
		<<f.volumen()<<endl;
	flat_car f1; f1.height=6; f1.width=7; f1.length=8;
	cout<<"El volumen con los valorees asignados es: "
		<<f1.volumen()<<endl;
}
