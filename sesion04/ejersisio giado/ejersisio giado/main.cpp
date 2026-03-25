#include "inbentaria.h"
#include<iostream>
#include<string>
#include<iomanip>
#include<limits>

int mostrarMenu() {

	std::cout << "____menu___" << std::endl;
	std::cout << "1.agregar Producto" << std::endl;
	std::cout << "2.buscar producto por codigo" << std::endl;
	std::cout << "3.venderunidades de un producto" << std::endl;
	std::cout << "4.eliminar producto" << std::endl;
	std::cout << "5mostrar inventario completo" << std::endl;
	std::cout << "6.mostrar valor total del inventario" << std::endl;
	std::cout << "7.salir" << std::endl;
	std::cout << "____________" << std::endl;
	std::cout << "opcion" << std::endl;
	int opcion;
	std::cin >> opcion;

	if (std::cin.fail()) {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
	return-1;

	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return opcion;
}
int main()
{
	EIF201::Inventario tienda(3);
	bool ejecutando = true;
	while (ejecutando) {
		int opcion = mostrarMenu();
		switch (opcion)
		{
		case 1:
			std::string nombre, codigo;
			double precio;
			int stock;
			std::cout << "nombre del producto:";
			std::getline(std::cin, nombre);

			std::cout << " nombre del producto";
			std::getline(std::cin, codigo);

			std::cout << "stok del producto";
			std::cin >> stock;

			std::cout << " precio del producto";
			std::cin >> precio;

			EIF201::Producto* nuevo = new EIF201::Producto(nombre, precio, stock, codigo);
			tienda.agregar(nuevo);
			break;
		}
		case 2: {
			std::string codigoBuscar;
			std::cout << "ingrese el codigo del producto que desea buscar ";
			std::getline(std::cin, codigoBuscar);

			ELF201::Producto* encontrado = tienda.buscarPorCodigo(codigoBuscar);

			if (econtrardo != nullptr) {
				std::cout << "producto en contrado " << std::endl;
				econtrado->mostrar();
			}
			else {
				std::cout << "producto no encontrado" << std::endl;
			}
		}
	    default:
			break;
	}
	return 0;
}
