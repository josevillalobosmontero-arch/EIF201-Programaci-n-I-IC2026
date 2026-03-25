#include"producto.h"
#include<iomanip>

namespace EIF201 {

	Producto::Producto(std::string nombre, double precio, int stock, std::string codigo) : nombre
(nombre),precio(precio),stock(stock),codigo(codigo){ }


	std::string Producto::getNombre()const{
		return nombre;
	}
	double Producto::getPrecio()const {
		return precio;
	}


	int Producto::getStock()const {
		return stock;
	}
	std::string Producto::getCodigo()const {
		return codigo;

	}

	void Producto::setPrecio(double nuevoPrecio) {
		if (nuevoPrecio < 0) {
			std::cout << "error. el precio no puede ser 0";
		}
		precio = nuevoPrecio;
	}
	void Producto::setStock(int nuevaCantidad) {
		if (nuevaCantidad < 0) {
			std::cout << "error. la cantidad no puede ser 0" << std::endl;
		}
		stock = nuevaCantidad;
	}
	void Producto::mostrar()const {
		std::cout << "[" << codigo << "]" << nombre
			<< "| precio" << std::fixed << std::setprecision(2) << precio 
			<< "| Stock" << stock << "unidaddes"<<std::endl;
	}


	bool Producto::vender(int cantidad)
	{
		return false;
	}
}
