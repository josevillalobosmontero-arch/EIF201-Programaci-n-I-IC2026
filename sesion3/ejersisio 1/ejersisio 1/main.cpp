#include <iostream>
#include"paquetes.h"
using namespace std;
int main()
{
	int cantidadPaquetes = 0;
	double limitePeso = 0.0;
	double* arregloPesos = crearRegistro(cantidadPaquetes);
	ingresarPesos(arregloPesos, cantidadPaquetes);

	cout << "escriba el limite de peso";
	cin >> limitePeso;
	double total = calcularPesoTotal(arregloPesos, cantidadPaquetes);
	int excedidos = contarSobreLimite(arregloPesos, cantidadPaquetes, limitePeso);
	double punteroMasPesado = buscarMasPesado(arregloPesos, cantidadPaquetes);

	cout << "peso total acomulado" << total << endl;
	cout << "paquete sobre el limite" << excedidos << endl;
		if (cantidadPaquetes > 0) {
			cout << "el paquete mas pesado es" << punteroMasPesado << "kg"<<endl;
					}
	delete[]arregloPesos;
	arregloPesos = nullptr;
	return 0;

}

