#include "Flota.h"
#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

int mostrarMenu() {

	std::cout << "____menu___" << std::endl;
	std::cout << "1.registrar vehiculo" << std::endl;
	std::cout << "2.buscar vehiculo por placa" << std::endl;
	std::cout << "3.mostrar vehiculo pro marca" << std::endl;
	std::cout << "4.registrar kilometros" << std::endl;
	std::cout << "5.desactivar vehiculo (furea de servisio)" << std::endl;
	std::cout << "6.reaticar vehiculo" << std::endl;
	std::cout << "7.eliminar vehiculo(dar e baja definitiva)" << std::endl;
	std::cout << "8.mostrar flota completa" << std::endl;
	std::cout << "9.mostrar cantidad de vehiculos activos" << std::endl;
	std::cout << "10.salir" << std::endl;
	std::cout << "____________" << std::endl;
	std::cout << "opcion" << std::endl;
	int opcion;
	std::cin >> opcion;

	int opciones;
	if (!(std::cin >> opcion)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits< std::streamsize>::max(), '\n');
		return - 1;
	}

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return opcion;
}
int main()
{
	UNA::Flota miFlota;
	bool ejecutando = true;
	while (ejecutando) {
		int opcion = mostrarMenu();
		switch (opcion)
		{
		case 1: {
			std::string placa, marca;
			double km;
			int anio;
			std::cout << "ingrese placa: ";
			std::getline(std::cin, placa);
			std::cout << " ingrese marca: ";
			std::getline(std::cin, marca);
			std::cout << "inrese anio: ";
			std::cin >> anio;
			std::cout << " ingrese kilietraje inicial: ";
			std::cin >> km;


			miFlota.agregar(new UNA::Vehiculo(placa, marca, anio, km));
			break;
		}
		case 2: {
			std::string placa;
			std::cout << "ingrese la placaa buscar:  ";
			std::getline(std::cin, placa);
			UNA::Vehiculo* v = miFlota.buscarPorPlaca(placa);

			if (v)v->mostrar();
			else std::cout << "Vehiculo n encantrado: " << std::endl;
			break;
		}
		case 3: {
			std::string marca;
			std::cout << "ingrese la marca: "; std::getline(std::cin, marca);
			miFlota.mostrarPorMarca(marca);
			break;
		}
		case 4: {
			std::string placa;
			double km;
			std::cout << "ingrese placa del vehiculo: ";
			std::getline(std::cin, placa);
			UNA::Vehiculo* v = miFlota.buscarPorPlaca(placa);
			if (v) {
				std::cout << "kilimetro a sumar: ";
				std::cin >> km;
				v->registrarKilometros(km);
			}
			else {
				std::cout << "vehiculo no encontrado: " << std::endl;
			}
			break;
		}
		case 5: {
			std::string placa;
			std::cout << "ingrese placa para desactivar: ";
			std::getline(std::cin, placa);
			UNA::Vehiculo* v = miFlota.buscarPorPlaca(placa);
			if (v)v->desactivar();
			else std::cout << "vehiculo no encontrado: " << std::endl;
			break;
		}
		case 6: {
			std::string placa;
			std::cout << "ingrese placa para reactivar: ";
			std::getline(std::cin, placa);
			UNA::Vehiculo* v = miFlota.buscarPorPlaca(placa);
			if (v)v->reactivar();
			else std::cout << "vehiculo no encontrado: " << std::endl;
			break;
		}
		case 7: {
			std::string placa;
			std::cout << "ingrese placa para dar de baja definitiva: ";
			std::getline(std::cin, placa);
			if (miFlota.eliminar(placa)) {
				std::cout << "vehiculo eliminado de la flota: " << std::endl;
			}
			break;
		}
		case 8: {
			miFlota.mostrarTodos();
			break;
		}
		case 9: {
			std::cout << "Cantidad de vehiculos activos: " << miFlota.contarActivos() << std::endl;
			break;
		}
		case 10: {
			std::cout << "saliendo del sistema: " << std::endl;
			break;
		}
		default:
			std::cout << "opcion no valida. intente de nuevo " << std::endl;
			break;
		}
	}
	return 0;
}
