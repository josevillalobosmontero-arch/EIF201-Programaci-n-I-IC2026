#include <iostream>
#include "ArrayProcessor.h"

int main() {
    ArrayProcessor processor;
    int n, tempArr[20], reversedArr[20];

    std::cout << "--- Inversor de Arreglos ---\n";
    std::cout << "Ingrese el tamano del arreglo (max 20): ";
    std::cin >> n;

    if (n <= 0 || n > 20) {
        std::cerr << "Error: El tamano debe estar entre 1 y 20.\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        std::cout << "Elemento [" << i << "]: ";
        std::cin >> tempArr[i];
    }

    processor.setData(tempArr, n);

    processor.reverseArray(reversedArr);

    std::cout << "\nArreglo Original:\n";
    processor.printArray(tempArr, n);

    std::cout << "\nArreglo Invertido:\n";
    processor.printArray(reversedArr, n);

    return 0;
}