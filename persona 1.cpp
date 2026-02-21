#include <iostream>
using namespace std;
class Persona{
	//atributos
	protected :
		string nombres,apellidos,driecion,fecha_nacimiento;
		int telefono;
    // costructor
    persona(){
	}
	persona(string nom,string ape,string dir,int tel,string fn){
		nombre= nom;
		apellidos= ape;
		direcion= dir;
		telefeno= tel;
		fecha_nacimiento= fn;
	}
	// metodos (CRUD)
	void crear();
	void leer();
	void actualizar();
	void borrar();
};
