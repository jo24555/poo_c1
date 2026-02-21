#include <iostream>   // Permite usar cout y cin
#include <string>     // Permite usar strings

using namespace std;

int main() {
    // ?? Declaración y asignación de variables
    int edad = 0;
    float altura = 0.0f;
    double peso = 0.0;
    char inicial = ' ';
    bool esEstudiante = false;
    string nombre = "";

    // ?? Mostrar mensaje en pantalla
    cout << "¡Bienvenido al programa de ejemplo en C++!" << endl;

    // ?? Entrada de datos por teclado
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);  // Leer nombre completo con espacios

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su altura (en metros): ";
    cin >> altura;

    cout << "Ingrese su peso (en kilogramos): ";
    cin >> peso;

    cout << "Ingrese la inicial de su nombre: ";
    cin >> inicial;

    cout << "¿Es usted estudiante? (1 = si, 0 = no): ";
    cin >> esEstudiante;

    // ?? Salida de datos con explicación
    cout << "\n=== Resumen de los datos ingresados ===" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Altura: " << altura << " metros" << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "Es estudiante: " << (esEstudiante ? "Sí" : "No") << endl;

    // ?? Operaciones básicas
    int edadEn5Anos = edad + 5;
    cout << "\nEn 5 años tendrá: " << edadEn5Anos << " años" << endl;

    return 0;
}

