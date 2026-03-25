#include "Flota.h"
#include <iostream>  
#include <string>

namespace UNA {

    Flota::Flota() : cantidad(0), capacidad(3) {
        vehiculos = new Vehiculo * [capacidad];
    }

    Flota::~Flota() {
        for (int i = 0; i < cantidad; i++) {
            delete vehiculos[i];
        }
        delete[] vehiculos; 
    }

    void Flota::redimensionar() {
        capacidad *= 2;
        Vehiculo** nuevo = new Vehiculo * [capacidad];
        for (int i = 0; i < cantidad; i++) {
            nuevo[i] = vehiculos[i];
        }
        delete[] vehiculos;
        vehiculos = nuevo;
    }

    void Flota::agregar(Vehiculo* nuevo) {
        if (cantidad == capacidad) {
            redimensionar();
        }
        vehiculos[cantidad++] = nuevo;
    }

    Vehiculo* Flota::buscarPorPlaca(std::string placa) const {
        for (int i = 0; i < cantidad; i++) {
            if (vehiculos[i]->getPlaca() == placa) {
                return vehiculos[i];
            }
        }
        return nullptr;
    }

    void Flota::mostrarPorMarca(std::string marca) const {
        int encontrados = 0;
        std::cout << "--- Vehiculos de la marca: " << marca << " ---" << std::endl;

        for (int i = 0; i < cantidad; i++) {
            if (vehiculos[i]->getMarca() == marca) {
                vehiculos[i]->mostrar();
                encontrados++;
            }
        }

        if (encontrados == 0) {
            std::cout << "No se encontraron vehiculos de la marca: " << marca << std::endl;
        }
        else {
            std::cout << "Total encontrados: " << encontrados << std::endl;
        }
    }

    bool Flota::eliminar(std::string placa) {
        for (int i = 0; i < cantidad; i++) {
            if (vehiculos[i]->getPlaca() == placa) {
                if (vehiculos[i]->isActivo()) {
                    std::cout << "Error: Debe desactivar el vehiculo antes de eliminarlo." << std::endl;
                    return false;
                }
                delete vehiculos[i];
                for (int j = i; j < cantidad - 1; j++) {
                    vehiculos[j] = vehiculos[j + 1];
                }
                cantidad--;
                return true;
            }
        }
        std::cout << "Vehiculo no encontrado." << std::endl;
        return false;
    }

    int Flota::contarActivos() const {
        int cont = 0;
        for (int i = 0; i < cantidad; i++) {
            if (vehiculos[i]->isActivo()) cont++;
        }
        return cont;
    }

    void Flota::mostrarTodos() const {
        if (cantidad == 0) {
            std::cout << "La flota esta vacia." << std::endl;
            return;
        }
        std::cout << "=== LISTADO DE FLOTA ===" << std::endl;
        for (int i = 0; i < cantidad; i++) {
            vehiculos[i]->mostrar();
        }
    }
}