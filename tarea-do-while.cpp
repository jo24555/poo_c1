#include <iostream>
using namespace std;

int main() {

    int numero;

    do{
        cout << "Ingrese un numero: ";
        cin >> numero;

    }while(numero <= 100);

    cout << "Numero mayor a 100 ingresado" << endl;

    return 0;
}
