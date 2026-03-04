#include <iostream>
#include "ProcesadorNumeros.h"

using namespace std;

int main() {
    ProcesadorNumeros procesador;

    procesador.leerDatos();

    cout << "\n--- Resultados ---" << endl;
    cout << "1. Valor mayor: " << procesador.calcularMayor() << endl;
    cout << "2. Valor menor: " << procesador.calcularMenor() << endl;
    cout << "3. Suma total: " << procesador.calcularSuma() << endl;
    cout << "4. Promedio aritmetico: " << procesador.calcularPromedio() << endl;

    return 0;
}