#include "Persona t1.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona{
	private :
		string nit;
		
	// metodos (costructor y metods crud)
	public :
		Cliente (){
		}
		Cliente (string nom,string ape,string dir,int tel,string fn,string n) : Persona(nom,ape,dir,tel,fn){
			nit = n;
		}
		// set (modificar un atributo o para enviar datos al atributo)
		void setNit(string n){
			nit = n;
		}
		void setNombres(string nom){
			nombres = nom;
		}
		void setApellidos(string ape){
			apellidos = ape;
		}
		void setDireccion(string dir){
			direccion = dir;
		}
		void setTelefono(int tel){
			telefono = tel;
		}
		void setFechaNacimiento(string fn){
			fecha_nacimiento = fn;
		}
		string getNit(){
			return nit;
		}
		string getNombres(){
			return nombres;
		}
		string getApellidos(){
			return apellidos;
		}
		string getDireccion(){
			return direccion;
		}
		int getTelefono(){
			return telefono;
		}
		string getFechaNacimiento(){
			return fecha_nacimiento;
		}
		void leer() {
			cout<<"Nit: "<< nit<<endl;
			cout<<"Nombres: "<<nombres<<endl;
			cout<<"Apellidos:"<<apellidos<<endl;
			cout<<"Direccion:"<<direccion<<endl;
			cout<<"Telefono:"<<telefono<<endl;
			cout<<"Fecha Nacimiento:"<<fecha_nacimiento<<endl;		
			};
