#include<iostream>
using namespace std;

main(){
	int i=50;
	double d=50;
	cout<<"i == (int) d yields "<<(i==(int)d)<<endl;
	cout<<"(double) i != d yields "<<((double)i!=d)<<endl;
	cout<<"i > (int) d yields "<<(i>(int)d)<<endl;
	cout<<"(double) i < d yields "<<((double)i<d)<<endl;
	cout<<"i >= (int) d yields "<<(i>=(int)d)<<endl;
	cout<<"(double) i <= d yields "<<((double)i<=d)<<endl;
}
/*Aqui realizamos diferentes coparaciones, observamos que para comparar dos numeros de diferente tip (int y double) tenemos que convertir 
un numero al tipo del otro numero para poder realizar la operacion correctamente tambien notamos que las comparaciones se deben de
hacer entre parentesis porque los operadores de comparacion tienen una menor precedencia que el simbolo <<, las operaciones 
aritmeticas no necesitan de estos parentesis ya que su precedencia es mayor*/ 
