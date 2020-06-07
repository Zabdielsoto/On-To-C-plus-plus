#include <iostream>
using namespace std;

class flat_car{
	public:
		double height, length, width;
		flat_car(){height=3; length=4; width=5;}
		flat_car(double h, double l, double w){writer_function(h,l,w);}
		void reader_function(){cout<<"Leyendo los datos de las variables"
								 <<endl<<"Altura: "<<height<<endl
								 <<"Longuitud: "<<length<<endl
								 <<"Ancho: "<<width<<endl;}
		void writer_function(double h, double l, double w){
		cout<<"Asignando datos a las variables"<<endl;
		height=h; length=l; width=w;}
		double volumen() { return height*length*width;}
};

main(){
	flat_car f1;
	f1.reader_function();
	flat_car f2(5,6,7);
	f2.reader_function();
	flat_car f3(8,9,10);
	f3.reader_function();
	cout<<"Los volumenes son: "<<endl<<"Volumen 1: "<<f1.volumen()
		<<endl<<"Volumen 2: "<<f2.volumen()<<endl
		<<"Volumen 3: "<<f3.volumen();
}

/* Metemos los tipos de funciones writer y reader para la clase, una para mostrar valores y otra para asignarlos a un objeto,
notese que la writer function esta dentro de la funcion constructora por lo que solo se llama a la funcion constructora 
en el segmento main para asignar valores*/
