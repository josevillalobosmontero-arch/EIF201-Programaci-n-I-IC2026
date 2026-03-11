#include "paquetes.h"
#include <iostream>

double* crearRegistro(int& cantidad) {
	do {
		std::cout << " ingrese ka cantidad de paquete";
		std::cin >> cantidad;
		if (cantidad <= 0) {
			std::cout << "error la cantidad de paquetes tiene que ser mayor que 0" << std::endl;
		}
	} while (cantidad <= 0);
	return new double[cantidad];
}

void ingresarPesos(double* pesos, int cantidad) {
	for (int i = 0; i < cantidad; i++) {
		double peso;
		do {
			std::cout << "peso del paquete" << (i + 1) << "(kg)";
			std::cin >> peso;
			if (peso <= 0) {
				std::cout << "error el peso no puede ser 0." << std::endl;

			}
		} while (peso <= 0);
		pesos[i] = peso;
	}
}

double calcularPesoTotal(const double* pesos, int cantidad) {
	double total = 0;
	for (int i = 0; i < cantidad; i++) {
		total += pesos[i];

	}
	return total;
}

int contarSobreLimite(const double* pesos, int cantidad, double limite) {
	int contador = 0; 
	for (int i = 0; i < cantidad; i++) {
		if (pesos[i] > limite) {
			contador++;
		}
	}
	return contador;
}

double buscarMasPesado(const double* pesos, int cantidad) {
	if (cantidad <= 0) return 0.0;

	double masPesado = pesos[0];
	for (int i = 1; i < cantidad; i++) {
		if (pesos[i] > masPesado) {
			masPesado = pesos[i];
		}
		
	}
	return masPesado;
}
