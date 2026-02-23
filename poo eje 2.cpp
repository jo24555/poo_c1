class Docente : public Persona {
private:
    string codigo;
    string nit;
    float salario;
    string profesion;

public:
    Docente() {}

    void leerDatos() {
        crear(); // Datos heredados

        cout << "Ingrese codigo: ";
        cin >> codigo;

        cout << "Ingrese NIT: ";
        cin >> nit;

        cout << "Ingrese salario: ";
        cin >> salario;

        cout << "Ingrese profesion: ";
        cin >> profesion;
    }

    void mostrar() {
        leer(); // Muestra datos de Persona

        cout << "\n--- Datos de Docente ---\n";
        cout << "Codigo: " << codigo << endl;
        cout << "NIT: " << nit << endl;
        cout << "Salario: " << salario << endl;
        cout << "Profesion: " << profesion << endl;
    }
};
