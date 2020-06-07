#include<iostream>
using namespace std;
//Define box_car_volume first
double box_car_volume (double h, double w, double l){
	cout<<"The value of l inside box_car_volume is "
		<<l<<endl;
		return h*w*l;
}
//Then define main:
main(){
	double l=40, volume;
	cout<<"The value of l outside box_car_volume is "
		<<l<<endl;
		volume=box_car_volume (10.5, 9.5, l+10);
	cout<<"The volume of a stretched box car is "
		<<volume<<endl;
	cout<<"The value of l outside box_car_volume is still "
		<<l<<endl;
}
