#include "ArrayProcessor.h"
#include <iostream>

ArrayProcessor::ArrayProcessor() : size(0) {}

bool ArrayProcessor::setData(int arr[], int n) {
    if (n <= 0 || n > 20) return false;

    size = n;
    for (int i = 0; i < size; i++) {
        original[i] = arr[i];
    }
    return true;
}

void ArrayProcessor::reverseArray(int outputArr[]) const {
    for (int i = 0; i < size; i++) {
        outputArr[i] = original[size - 1 - i];
    }
}

void ArrayProcessor::printArray(const int arr[], int n) const {
    for (int i = 0; i < n; i++) {
        std::cout << "[" << arr[i] << "] ";
    }
    std::cout << std::endl;
}