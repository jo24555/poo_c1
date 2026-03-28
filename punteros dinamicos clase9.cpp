#include <iostream>
using namespace std;
//punteros con asignacion de memoriadinamica;
//new=reservar un espacio en memoria
// delete [] = liberar la memoria
//recoletor de basura

main(){
	int fil = 0, col=0,**pm_notas;
	cout<<"ingrese la cantidad de estudiantes:";
	cin>>fil;
	cout<<"ingrese la cantidad de notas por notas:";
	cin>>col;

	
	pm_notas = new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i] = new int[col];
	}
    for (int i=0;i<fil;i++){
    	cout<<"______estudiantes_____"<<i<<endl;
    	for (int ii=0;ii<col;ii++){
    		cout<<", nota"<<ii<<" : ";
    		cin>>*(*(pm_notas+i)+ii);
		}
		cout<<"____________"<<endl;
	}
    cout<<"-----monstrar notas --------"<<endl;
    for (int i=0;i<fil;i++){
    	
    	for (int ii=0;ii<col;ii++){
    		cout<<*(*(pm_notas+i)+ii)<<endl;
		}
		cout<<"__________"<<endl;
	}
	
	for(int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;
	
	system("pause");
}

