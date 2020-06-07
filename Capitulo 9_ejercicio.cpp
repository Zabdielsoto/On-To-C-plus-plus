#include<iostream>
using namespace std;

class flat_car {
	public: double width,length;
};

double volume(flat_car a){
	return 8.25*a.width*a.length;
}

main(){
	flat_car x; x.width=9.5; x.length=10.5;
	cout<<"El volumen de un flat car es "<<volume(x)<<endl;
}
