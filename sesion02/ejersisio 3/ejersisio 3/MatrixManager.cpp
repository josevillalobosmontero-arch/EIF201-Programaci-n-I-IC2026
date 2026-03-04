#include "MatrixManager.h"
#include <iostream>
#include <iomanip>

using namespace std;

MatrixManager::MatrixManager() {
    for (int i = 0; i < FILAS; i++)
        for (int j = 0; j < COLS; j++)
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