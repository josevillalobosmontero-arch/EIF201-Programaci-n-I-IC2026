#include <iostream>
#include <string>
#include "NameProcessor.h"

using namespace std;

int main() {
    string inputName;

    cout << "--- Analizador de Nombres ---" << endl;
    cout << "Ingrese su nombre completo (Nombre Apellido1 Apellido2): ";

    getline(cin, inputName);

    NameProcessor processor(inputName);

    cout << "\n--- REPORTE ---" << endl;
    cout << "1. Primer Nombre:   " << processor.getFirstName() << endl;
    cout << "2. Primer Apellido: " << processor.getFirstSurname() << endl;
    cout << "3. Total Vocales:   " << processor.countVowels() << endl;
    cout << "4. En Mayusculas:   " << processor.toUpperCase() << endl;
    cout << "5. Longitud Total:  " << processor.getLength() << " caracteres." << endl;

    return 0;
}