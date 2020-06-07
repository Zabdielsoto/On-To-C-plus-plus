#include<iostream>
using namespace std;

class flat_car{
	public:
		double length, width, height;
		flat_car(){length=2; width=3; height=4;}
		flat_car(double l, double w, double h){length=l; width=w; height=h;}
		double volume(){return length*width*height;}
};

main(){
	flat_car f1;
	flat_car f2(6,7,8);
	cout<<"El volumen de un carro con valores default es "
		<<f1.volume()<<endl
		<<"El volumen de un carro con valores asignados es "
		<<f2.volume();
}
