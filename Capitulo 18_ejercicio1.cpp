#include<iostream>
using namespace std;

class salud{
	public:
		double peso, altura;
		int genero;
		salud(){peso=50; altura=170; genero=1;}
		salud(double p, double a, int g){peso=p; altura=a; genero=g;}
		void ideal(){
			if(peso<(0.9*altura)){cout<<"El paciente esta con bajo peso"<<endl;}
			else if(peso>(1.1*altura)){cout<<"El paciente tiene sobrepeso"<<endl;}
			else cout<<"El paciente esta en su peso ideal"<<endl;
		}
};

main(){
	double p, a; int g;
	cout<<"El peso del paciente es: "; cin>>p;
	cout<<"La altura del paciente es: "; cin>>a;
	cout<<"El genero del paciente es: "; cin>>g;
	salud s(p,a,g);
	s.ideal();
}
