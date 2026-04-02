#include <iostream>
using namespace std;
struct Estudiante {
	int *codigo;
	string *nombre;
	int **nota;
	
};
main() {
	Estudiante estudiante;
		
	int fila = 0,columna = 0;
	cout<<"Cuantos Estudiantes desea Agregar:";
	cin>>fila;	
		
	cout<<"Cuantos Notes por Estudiante desea Agregar:";
	cin>>columna;
	
	estudiante.codigo = new int [fila];
	estudiante.nombre = new string [fila];
	estudiante.nota = new int *[fila];
	for (int i=0;i<fila;i++){
		estudiante.nota[i] = new int[columna];
	}
	cout<<"____________Ingreso de Notas ____________"<<endl;
	
	for (int i=0;i<fila;i++){
		cout<<"codigo["<<i<<"]:";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"nombre completo["<<i<<"]:";
		getline(cin,estudiante.nombre[i]);
		for (int ii=0;ii<columna;ii++){
			cout<<"ingrese nota["<<ii<<"] :";
			cin>>*(*(estudiante.nota+i)+ii);
		}
		cout<<"______________"<<endl;
	}
	cout<<"____mostrar datos____"<<endl;
	
	for (int i=0;i<fila;i++){
		cout<<"codigo["<<i<<"]:"<<estudiante.codigo[i]<<endl;
		cout<<"nombre completo["<<i<<"]:"<<estudiante.nombre[i]<<endl;
		for (int ii=0;ii<columna;ii++){
			cout<<"ingrese nota["<<ii<<"] :"<<*(*(estudiante.nota+i)+ii)<<endl;
		}
		cout<<"______________"<<endl;
	}
	   
	for (int i=0;i<fila;i++){
		delete [] estudiante.nota ;
	}
	     delete [] estudiante.codigo ;
	delete [] estudiante.nombre ;
	delete [] estudiante.nota  ;
	
	system("pause");
	

}
