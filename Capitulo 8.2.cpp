#include <iostream>
//Use the mathematics library, which contains a declaration for M_PI:
#include<math.h>
using namespace std;
//Then define tank_car_volume, a function that uses M_PI: 
double tank_car_volume (double r, double l){
	return M_PI*r*r*l;
}
//Then define main
main(){
	cout<<"The volume of a standard tank car is "
		<<tank_car_volume(3.5, 40)<<endl;
}
