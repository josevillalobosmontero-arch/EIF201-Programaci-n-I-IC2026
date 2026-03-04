#ifndef MATRIX_MANAGER_H
#define MATRIX_MANAGER_H

#include <iomanip>

class MatrixManager {
private:
    static const int FILAS = 3;
    static const int COLS = 3;
    int matriz[FILAS][COLS];

public:
    MatrixManager();

    void leerMatriz();
    void imprimirMatriz() const;

    void calcularSumaFilas() const;
    void calcularSumaColumnas() const;
    void calcularSumaDiagonal() const;
};

#endif