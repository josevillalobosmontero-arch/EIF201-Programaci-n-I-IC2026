#include "MatrixManager.h"
#include <iostream>

int main() {
    MatrixManager miMatriz;

    miMatriz.leerMatriz();
    miMatriz.imprimirMatriz();

    std::cout << "\n--- RESULTADOS ANALITICOS ---" << std::endl;
    miMatriz.calcularSumaFilas();
    miMatriz.calcularSumaColumnas();
    miMatriz.calcularSumaDiagonal();

    return 0;
}