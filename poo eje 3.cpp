class Estudiante : public Persona {
private:
    string carnet;

public:
    Estudiante() {}

    void leerDatos() {
        crear(); // Datos heredados

        cout << "Ingrese carnet: ";
        cin >> carnet;
    }

    void mostrar() {
        leer(); // Muestra datos de Persona

        cout << "\n--- Datos de Estudiante ---\n";
        cout << "Carnet: " << carnet << endl;
    }
};
