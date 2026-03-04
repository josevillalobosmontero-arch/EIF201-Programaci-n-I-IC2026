#ifndef ARRAY_PROCESSOR_H
#define ARRAY_PROCESSOR_H

class ArrayProcessor {
private:
    int original[20];
    int size;

public:
    ArrayProcessor();

    bool setData(int arr[], int n);

    void reverseArray(int outputArr[]) const;

    void printArray(const int arr[], int n) const;

    int getSize() const { return size; }
};

#endif