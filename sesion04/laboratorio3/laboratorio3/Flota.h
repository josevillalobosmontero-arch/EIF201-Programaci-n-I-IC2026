#ifndef FOLOTA_H
#define  FOLOTA_H

#include"Vehiculo.h"

namespace UNA {
	class Flota
	{
	private:
		Vehiculo** vehiculos;
		int cantidad;
		int capacidad;
		void redimensionar();
	public:
		Flota();
		~Flota();
		void agregar(Vehiculo* nuevo);
		Vehiculo* buscarPorPlaca(std::string placa) const;
		void mostrarPorMarca(std::string marca) const;
		bool eliminar(std::string placa);
		int contarActivos()const;
		void mostrarTodos() const;
	};
}
#endif