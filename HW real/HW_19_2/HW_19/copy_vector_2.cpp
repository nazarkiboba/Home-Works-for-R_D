#include "copy_vector.h"
#include <algorithm>
#include <cstdlib>
#include <iostream>

class DynamicIntArray
{
    int* array;
    std::size_t arraySize;

    public:

    DynamicIntArray() : array(nullptr), arraySize(0) {}
    DynamicIntArray(std::size_t size) : array(new int[size]), arraySize(size) {}
    void copyArray(const int* source, int* destination, std::size_t size) 
    {
        std::copy(source, source + size, destination);
    }    
    ~DynamicIntArray()
    {
        delete[] array;
    }
    DynamicIntArray& operator=(const DynamicIntArray& other) 
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

    int& operator[](std::size_t index) {
        static int dummy = 0; 
        if (index >= arraySize) {
            std::cerr << "Error: Index out of range" << std::endl;
            return dummy; 
        }
        return array[index];
    }

    void setSize(std::size_t newSize)
    {
        int* newArray = new int[newSize];
        std::size_t minSize = (newSize < arraySize) ? newSize : arraySize;
        for (std::size_t i = 0; i < minSize; ++i)
            newArray[i] = array[i];    
        delete[] array;
        array = newArray;
        arraySize = newSize;
    }

    std::size_t getSize() const {return arraySize;}

    void clear() 
    {
        delete[] array;
        array = nullptr;
        arraySize = 0;
    }

    void push_back(int element)
    {
        int* newArray = new int[arraySize + 1];
        for (std::size_t i = 0; i < arraySize; ++i)
            newArray[i] = array[i];    
        newArray[arraySize] = element;
        delete[] array;
        array = newArray;
        ++arraySize;
    }

};


