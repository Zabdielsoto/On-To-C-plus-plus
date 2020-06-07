#include<iostream>
using namespace std;

class empleos{
	public:
		int antiguedad, experiencia, puesto, salario;
		empleos(){cout<<"Clase empleos"<<endl;}
};

class ciencias:public empleos{
	public:
		int tipo;
		ciencias(){cout<<"Clase Ciencias"<<endl;}
};

class medicina:public empleos{
	public:
		int licencia, consultorio;
		medicina(){cout<<"Clase Medicina"<<endl;}
};

class economia:public empleos{
	public:
		int privado, publico;
		economia(){cout<<"Clase economia"<<endl;}
};

class derecho:public empleos{
	public:
		int publico, privado;
		derecho(){cout<<"Clase economia"<<endl;}
};

class ingenieria:public empleos{
	public:
		int tipo;
		ingenieria(){cout<<"Clase ingenieria"<<endl;}
};

class deportes:public empleos{
	public:
		int rutina, alimentacion;
		deportes(){cout<<"Clase deportes"<<endl;}
};

class fisico: public ciencias{
	public:
		int campo, actividades, comprobaciones;
		fisico(){cout<<"Clase fisico"<<endl;}
};

class abogado:public derecho{
	public:
		int defensor, atacante, horas;
		abogado(){cout<<"Clase abogado"<<endl;}
};

class mecatronico: public ingenieria{
	public:
		int campo, especialidad, proyectos;
		mecatronico(){cout<<"Clase Mecatronico"<<endl;}
};

class futbolista:public deportes{
	public:
		int equipo, partidos, competencias;
		futbolista(){cout<<"Clase futbolista"<<endl;}
};

main(){
	
}
