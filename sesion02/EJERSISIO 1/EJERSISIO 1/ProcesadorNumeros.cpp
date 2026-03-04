#include "ProcesadorNumeros.h"
#include <iostream>

using namespace std;

void ProcesadorNumeros::leerDatos() {
    cout << "Ingrese " << TAMANO << " numeros enteros:" << endl;
    for (int i = 0; i < TAMANO; i++) {
        cout << "Numero [" << i + 1 << "]: ";
        cin >> numeros[i];
    }
}

int ProcesadorNumeros::calcularMayor() {
    int mayor = numeros[0];
    for (int i = 1; i < TAMANO; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
    return mayor;
}

int ProcesadorNumeros::calcularMenor() {
    int menor = numeros[0];
    for (int i = 1; i < TAMANO; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    return menor;
}

int ProcesadorNumeros::calcularSuma() {
    int suma = 0;
    for (int i = 0; i < TAMANO; i++) {
        suma += numeros[i];
    }
    return suma;
}

double ProcesadorNumeros::calcularPromedio() {
    return static_cast<double>(calcularSuma()) / TAMANO;
}