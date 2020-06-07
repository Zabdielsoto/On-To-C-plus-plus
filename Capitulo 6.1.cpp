#include<iostream>
using namespace std;

void display_box_car_volume (int h, int w, int l){
	cout<<"The volume of the box car is "<<h*w*l<<endl;
	return; // este return vacio es opcional
}

main(){
	int height=11, width=9, length=40;
	display_box_car_volume(height,width,length);
}
