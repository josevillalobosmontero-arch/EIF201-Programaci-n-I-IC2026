#ifndef PROCESADORNUMEROS_H
#define PROCESADORNUMEROS_H

class ProcesadorNumeros {
private:
    int numeros[10];
    static const int TAMANO = 10;

public:
    void leerDatos();

    int calcularMayor();
    int calcularMenor();
    int calcularSuma();
    double calcularPromedio();
};

#endif