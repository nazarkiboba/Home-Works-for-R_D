#include "copy_vector.h"

DynamicIntArray::DynamicIntArray() : array(nullptr), arraySize(0) {}

DynamicIntArray::DynamicIntArray(std::size_t size) : array(new int[size]), arraySize(size) {}

DynamicIntArray::DynamicIntArray(const DynamicIntArray& other) : array(new int[other.arraySize]), arraySize(other.arraySize) 
{
    for (std::size_t i = 0; i < arraySize; ++i) 
        array[i] = other.array[i];    
}

DynamicIntArray::~DynamicIntArray()
{
    delete[] array;
}

DynamicIntArray& DynamicIntArray::operator=(const DynamicIntArray& other) 
{
    if (this != &other)
    {
        delete[] array;
        array = new int[other.arraySize];
        arraySize = other.arraySize;
        for (std::size_t i = 0; i < arraySize; ++i) 
            array[i] = other.array[i];        
    }
    return *this;
}

int& DynamicIntArray::operator[](std::size_t index) {return array[index];}

void DynamicIntArray::setSize(std::size_t newSize)
{
    int* newArray = new int[newSize];
    std::size_t minSize = (newSize < arraySize) ? newSize : arraySize;
    for (std::size_t i = 0; i < minSize; ++i)
        newArray[i] = array[i];    
    delete[] array;
    array = newArray;
    arraySize = newSize;
}

std::size_t DynamicIntArray::getSize() const {return arraySize;}

void DynamicIntArray::clear() 
{
    delete[] array;
    array = nullptr;
    arraySize = 0;
}

void DynamicIntArray::append(int element)
{
    int* newArray = new int[arraySize + 1];
    for (std::size_t i = 0; i < arraySize; ++i)
        newArray[i] = array[i];    
    newArray[arraySize] = element;
    delete[] array;
    array = newArray;
    ++arraySize;
}