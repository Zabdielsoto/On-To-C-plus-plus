#include<iostream>
using namespace std;

main(){
	int change;
	cin>>change;
	cout<<"The temperature has changed by "
		<<change
		<<(change==1?" degree":" degrees")
		<<endl;
}
/*Ejemplificamos el uso del conditional operator combination en donde se introduce la palabra degree o degrees segun sea el caso del valor
de la variable change*/
