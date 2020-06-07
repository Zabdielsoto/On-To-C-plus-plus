#include<iostream>
using namespace std;

class paciente{
	public:
		double peso, altura;
		int genero;
		paciente(){peso=50; altura=160; genero=1;}
		paciente(double p, double a, int g){peso=p; altura=a, genero=g;}
		void desviacion(){
			if(peso==altura){cout<<"El paciente tiene peso ideal"<<endl;}
			else cout<<"El paciente tiene "<<altura-peso
			<<(altura-peso==1 ?" kilogramo ":" kilogramos ")<<(altura-peso<0 ?" menos.":" mas.")<<endl;}
};

main(){
	double p, a; int g;
	cout<<"El peso del paciente es: "; cin>>p;
	cout<<"La altura del paciente es: "; cin>>a;
	cout<<"El genero del paciente es: "; cin>>g;
	paciente s(p,a,g);
	s.desviacion();
}
