#include<iostream>
using namespace std;

main(){
	int height, width, length;
	cout<<"Please type three integers: "<<endl;
	cin>>height;
	cin>>width;
	cin>>length;
	cout<<"The volume of a "
		<<height<<" by "<<width<<" by "<<length
		<<" box car is "<<height*width*length<<endl;
}
