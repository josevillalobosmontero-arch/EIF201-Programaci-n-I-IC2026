#ifndef PAQUETES_H
#define PAQUETES_H
double* crearRegistro(int& cantidad);

void ingresarPesos(double* peso, int cantidad);

double calcularPesoTotal(const double* peso, int cantidad);

int contarSobreLimite(const double* pesos, int cantidad, double limite);

 double buscarMasPesado(const double* pesos, int cantidad);

#endif 
