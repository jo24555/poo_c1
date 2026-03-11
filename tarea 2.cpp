#include <iostream>
using namespace std;

int main() {

    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    // Estructura IF
    if(numero > 0){
        cout << "El numero es positivo" << endl;
    }

    // Estructura IF...ELSE
    if(numero % 2 == 0){
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }

    // Estructura SWITCH
    switch(numero){
        case 1:
            cout << "El numero es UNO" << endl;
            break;

        case 2:
            cout << "El numero es DOS" << endl;
            break;

        case 3:
            cout << "El numero es TRES" << endl;
            break;

        default:
            cout << "El numero no es 1, 2 o 3" << endl;
    }

    return 0;
}
