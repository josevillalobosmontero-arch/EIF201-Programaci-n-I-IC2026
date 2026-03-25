#ifndef PRODUCTO_H
#define PRODUCTO_H

#include<string>
#include<iostream>

namespace EIF201 {

	class Producto {

	private:
		std::string nombre;
		double precio;
		int stock;
		std::string codigo;
	public:
		Producto(std::string nombre, double precio, int stock, std::string codigo);

	std::string getNombre()const;
		double getPrecio()const;
		int getStock()const;
		std::string getCodigo()const;

		void setPrecio(double numeroPresio);
		void setStock(int numeroCantidad);
		void mostrar() const;
		bool vender(int cantidad);



	};


}

#endif