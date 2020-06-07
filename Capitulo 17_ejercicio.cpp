#include<iostream>
using namespace std;

class energia{
	public:
		double m1, m2, v1, v2, e1, e2;
		energia(){m1=2; m2=3; v1=4; v2=5;}
		energia(double ma1, double ma2, double ve1, double ve2){m1=ma1; m2=ma2; v1=ve1; v2=ve2;}
		void calculo(){cout<<"La energia del carro 1 es: "<<(e1=0.5*m1*v1*v1)<<endl;
					   cout<<"La energia del carro 2 es: "<<(e2=0.5*m2*v2*v2)<<endl;
					  }
		void comparacion(){cout<<"La energia del carro 1 es mayor que la del carro 2? "<<(e1>e2)<<endl;
							cout<<"La energia del carro 1 es menor que la del carro 2? "<<(e1<e2)<<endl; 
		}
};

main(){
	double m1, m2, v1, v2;
	cout<<"Digite la masa 1: "; cin>>m1;
	cout<<"Digite la velocidad 1: "; cin>>v1;
	cout<<"Digite la masa 2: "; cin>>m2;
	cout<<"Digite la velocidad 2: "; cin>>v2;
	energia c1(m1,m2,v1,v2);
	c1.calculo();
	c1.comparacion();
}
