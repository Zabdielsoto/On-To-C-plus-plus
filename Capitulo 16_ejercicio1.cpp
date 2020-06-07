#include<iostream>
using namespace std;

//Construcciones, Edificios Empresas, Casas Residenciales
// Otros tipos

class construcciones{
	public:
		int metros_cuadrados, antiguedad;
		construcciones(){cout<<"Clase Construcciones"<<endl;}
};

class empresariales:public construcciones{
	public:
		int tipo_empresa, numero_empleados;
		empresariales(){cout<<"Clase Empresariales"<<endl;}
};

class residenciales:public construcciones{
	public:
		int numero_habitaciones, metros_jardin, numero_pisos;
		residenciales(){cout<<"Clase Residenciales"<<endl;}
};

class casa_de_lujo:public residenciales{
	public:
		int numero_contrucciones, costo, cocheras;
		casa_de_lujo(){cout<<"Clase casa de lujo"<<endl;}
};

class bungalow:public residenciales{
	public:
		int material, ubicacion;
		bungalow(){cout<<"Clase bungalow"<<endl;}
};

class skyscraper:public empresariales{
	public:
		int numero_pisos, numero_empresas;
		skyscraper(){cout<<"Clase skyscraper"<<endl;}
};

class warehouse:public empresariales{
	public:
		int almacenamiento, construcciones, ocupados, vacios;
		warehouse(){cout<<"Clase warehouse"<<endl;}
};

main(){
	
}

