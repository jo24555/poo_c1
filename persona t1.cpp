#include <iostream> 
using namespace std;
class Persona {
	//atributos
	protected : string nombres,apellidos,direccion;
	            int telefono;
	// costructo
	protected :
		    persona (){
			}
			persona(string nom,string ape,string dir,int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
				
			}
			
    //metodo
    void mostrar();
};
