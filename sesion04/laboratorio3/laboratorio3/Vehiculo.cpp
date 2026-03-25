#include"Vehiculo.h"

namespace UNA {
	Vehiculo::Vehiculo(std::string placa, std::string marca, int anio, double kilometraje)
		: placa(placa), marca(marca), anio(anio), kilometraje(kilometraje), activo(true) {
	}

	std::string Vehiculo::getPlaca() const { return placa; }
	std::string Vehiculo::getMarca() const { return marca; }
	int Vehiculo::getAnio()const { return anio; }
	double Vehiculo::getKilometraje() const { return kilometraje; }
	bool Vehiculo::isActivo()const { return activo; }

	void Vehiculo::registrarKilometros(double km) {
        if (!activo) {
            std::cout << "Error: El vehiculo esta fuera de servicio." << std::endl;
            return;
        }
        if (km > 0) {
            kilometraje += km;
        }
    }

    void Vehiculo::desactivar() {
        if (!activo) {
            std::cout << "El vehiculo ya esta fuera de servicio." << std::endl;
        } else {
            activo = false;
            std::cout << "Vehiculo desactivado exitosamente." << std::endl;
        }
    }

    void Vehiculo::reactivar() {
        if (activo) {
            std::cout << "El vehiculo ya esta activo." << std::endl;
        } else {
            activo = true;
            std::cout << "Vehiculo reactivado exitosamente." << std::endl;
        }
    }

    void Vehiculo::mostrar() const {
        std::cout << "Placa: " << placa << " | Marca: " << marca 
                  << " | Anio: " << anio << " | KM: " << kilometraje 
                  << " | Estado: " << (activo ? "ACTIVO" : "FUERA DE SERVICIO") << std::endl;
    }

}