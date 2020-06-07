#include <iostream>
using namespace std;
//First define pi to be a local variable:
double pi=3.14159;
//Then define tank_car_volume, a function that uses pi: 
double tank_car_volume (double r, double l){
	return pi*r*r*l;
}
//Then define main
main(){
	cout<<"The volume of a standard tank car is "
		<<tank_car_volume(3.5, 40)<<endl;
}
