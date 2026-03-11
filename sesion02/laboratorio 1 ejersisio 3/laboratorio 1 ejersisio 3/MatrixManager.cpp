#include "MatrixManager.h"
#include <iostream>
#include <iomanip>

using namespace std;

MatrixManager::MatrixManager() {
    for(int i = 0; i < FILAS; i++)
        for(int j = 0; j < COLS; j++)
            matriz[i][j] = 0;
}

void MatrixManager::leerMatriz() {
    cout << "--- Ingreso de datos para matriz 3x3 ---\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Ingrese valor [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void MatrixManager::imprimirMatriz() const {
    cout << "\nVisualizacion de la Matriz:" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << setw(6) << matriz[i][j];
        }
        cout << endl;
    }
}

void MatrixManager::calcularSumaFilas() const {
    cout << "\nSuma de Filas:" << endl;
    for (int i = 0; i < FILAS; i++) {
        int suma = 0;
        for (int j = 0; j < COLS; j++) {
            suma += matriz[i][j];
        }
        cout << "Fila " << i << ": " << suma << endl;
    }
}

void MatrixManager::calcularSumaColumnas() const {
    cout << "\nSuma de Columnas:" << endl;
    for (int j = 0; j < COLS; j++) {
        int suma = 0;
        for (int i = 0; i < FILAS; i++) {
            suma += matriz[i][j];
        }
        cout << "Columna " << j << ": " << suma << endl;
    }
}

void MatrixManager::calcularSumaDiagonal() const {
    int suma = 0;
    for (int i = 0; i < FILAS; i++) {
        suma += matriz[i][i]; 
    }
    cout << "\nSuma Diagonal Principal: " << suma << endl;
}