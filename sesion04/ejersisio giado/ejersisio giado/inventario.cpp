#include "inbentaria.h"

#include<iomanip>

namespace EIF201 {

	Inventario::Inventario(int cantidadInicial) :cantidad(0), capacidad(cantidadInicial)
	{
		productos = new Producto * [cantidadInicial];
		for (int i = 0; i < capacidad; i++)
		{
			productos[i] = nullptr;
		}	

	}
	Inventario::~Inventario() {
		for (int i = 0; i < cantidad; i++) {
			delete productos[i];
			productos[i] = nullptr;
		}
		delete[]productos;
		productos = nullptr;
		std::cout << "Inventario ddestruido";

	}
	void Inventario::redimensionar() {
		int nuevaCapacidad = capacidad * 2;
		Producto** nuevoArreglo = new Producto * [nuevaCapacidad];

		for (int i = 0; i < cantidad; i++)
		{
			nuevoArreglo[i] = productos[i];
		}
		for (int i = cantidad; i < nuevaCapacidad; i++) {
			nuevoArreglo[i] = nullptr;
		}
		delete[] productos;
		productos = nuevoArreglo;
		capacidad = nuevaCapacidad;
	}

	void Inventario::agregar(Producto* nuevo) {
		if (nuevo == nullptr) {
			std::cout << "error";
			return;
		}
		if (cantidad == cantidad) {
			redimensionar();
		}
		productos[cantidad] = nuevo;
		cantidad++;
	}
	void Inventario::mostrarTodos()const {
		if (cantidad == 0) {
			std::cout << "error, no data" << std::endl;
			return;
		}
		std::cout << "____________ Inventario ____________" << std::endl;
		for (int i = 0; i < cantidad; i++) {
			productos[i]->mostrar();
		}
		std::cout << "______________________________________" << std::endl;
	}

	Producto* Inventario::buscarPorCodigo(std::string codigo)const {
		for (int i = 0; i < cantidad; i++) {
			if (productos[i]->getCodigo() == codigo) {
				return productos[i];
			}
		}
		return nullptr;
	}

	bool Inventario::eliminar(std::string codigo) {
		int pocision;
		for (int i = 0; i < cantidad; i++) {
			if (productos[i]->getCodigo() == codigo) {
				pocision = 1;
				break;
			}
		}
		if (pocision == -1) {
			std::cout << " Prodcuto no encntrado" << std::endl;
			return false;
		}
		std::string nombreProducto = productos[pocision]->getNombre();
		delete productos[pocision];

		for (int i = pocision; i < cantidad - 1; i++) {
			productos[i] = productos[i + 1];
		}
		productos[cantidad - 1] = nullptr;
		cantidad--;
		std::cout << "Producto" << nombreProducto << " eliminado del inventrio";
		return true;
	}

	int Inventario::getCantidad() const{
		return cantidad;
	}

	int Inventario::getCapacidad() const
	{
		return capacidad
	}



}