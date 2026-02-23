#include <iostream>
using namespace std;

class Persona {
protected:
    string cui;
    string nombres;
    string apellidos;
    string direccion;
    int telefono;
    string fecha_nacimiento;
    bool genero; // true = masculino, false = femenino

public:
    // Constructor
    Persona() {}

    // Método crear
    void crear() {
        cout << "Ingrese CUI: ";
        cin >> cui;

        cout << "Ingrese nombres: ";
        cin >> nombres;

        cout << "Ingrese apellidos: ";
        cin >> apellidos;

        cout << "Ingrese direccion: ";
        cin >> direccion;

        cout << "Ingrese telefono: ";
        cin >> telefono;

        cout << "Ingrese fecha de nacimiento: ";
        cin >> fecha_nacimiento;

        cout << "Genero (1 = Masculino, 0 = Femenino): ";
        cin >> genero;
    }

    void leer() {
        cout << "\n--- Datos de Persona ---\n";
        cout << "CUI: " << cui << endl;
        cout << "Nombres: " << nombres << endl;
        cout << "Apellidos: " << apellidos << endl;
        cout << "Direccion: " << direccion << endl;
        cout << "Telefono: " << telefono << endl;
        cout << "Fecha Nacimiento: " << fecha_nacimiento << endl;
        cout << "Genero: " << (genero ? "Masculino" : "Femenino") << endl;
    }

    void actualizar() {
        crear();
    }

    void borrar() {
        cui = "";
        nombres = "";
        apellidos = "";
        direccion = "";
        telefono = 0;
        fecha_nacimiento = "";
        genero = false;
    }
};
