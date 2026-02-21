#incluyde "persona.cpp"
#include <iostream>

using name space std;

class cliente : persona{
	//atributos
	private :
		string ni;
		
		public :
	    // cosntructor
	    cliente(){
		}
		cliente(string nom,string ape,string dir,int tel,string fn,string n) : persona(nom,ape,dir,tel,fn){
		       nit =n; 
		} 
	void leer(){
		cout<<"nit:"<<nit<<rndl;
		cout<<"nombres:"<<thid.n<<endl;
		cout<<"apellidos:"<<thid.n<<endl;
		cout<<"direcion:"<<thid.n<<endl;
		cout<<"telefono:"<<thid.n<<endl;
		cout<<"fecha_nacimiento:"<<thid.n<<endl;
	}
	

};
