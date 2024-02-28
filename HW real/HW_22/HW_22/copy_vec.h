#pragma once
#include <cstdlib>

template<typename T>
class DynamicArray
{
public:
    DynamicArray();
    explicit DynamicArray(std::size_t size);
    DynamicArray(const DynamicArray& other);
    ~DynamicArray();
    DynamicArray& operator=(const DynamicArray& other);
    T& operator[](std::size_t index);
    void setSize(std::size_t newSize);
    std::size_t getSize() const;
    void clear();
    void append(const T& element);
    void reserve(std::size_t reservedSpace);
    std::size_t getCapacity() const;
    void shrinkToFit();
    void pop_back();
    T back() const;
    bool operator==(const DynamicArray& other) const;

private:
    T* array;
    std::size_t arraySize;
    std::size_t capacity;
};

template<typename T>
void DynamicArray<T>::append(const T& element) {
    if (arraySize >= capacity) {
        reserve(capacity * 2 + 1);
    }
    array[arraySize++] = element;
}

template<typename T>
DynamicArray<T>::DynamicArray() : array(nullptr), arraySize(0), capacity(0) {}

template<typename T>
DynamicArray<T>::DynamicArray(std::size_t size) : array(new T[size]), arraySize(size), capacity(size) {}

template<typename T>
DynamicArray<T>::DynamicArray(const DynamicArray& other) : array(new T[other.arraySize]), arraySize(other.arraySize), capacity(other.arraySize) {
    for (std::size_t i = 0; i < arraySize; ++i)
        array[i] = other.array[i];

}

template<typename T>
DynamicArray<T>::~DynamicArray() {
    delete[] array;
}

template<typename T>
DynamicArray<T>& DynamicArray<T>::operator=(const DynamicArray& other) {
    if (this != &other) {
        delete[] array;
        array = new T[other.arraySize];
        arraySize = other.arraySize;
        capacity = other.arraySize;
        for (std::size_t i = 0; i < arraySize; ++i) {
            array[i] = other.array[i];
        }
    }
    return *this;
}

template<typename T>
T& DynamicArray<T>::operator[](std::size_t index) {
    return array[index];
}

template<typename T>
void DynamicArray<T>::setSize(std::size_t newSize) {
    if (newSize > capacity) {
        reserve(newSize);
    }
    arraySize = newSize;
}

template<typename T>
std::size_t DynamicArray<T>::getSize() const {
    return arraySize;
}

template<typename T>
void DynamicArray<T>::clear() {
    delete[] array;
    array = nullptr;
    arraySize = 0;
    capacity = 0;
}

template<typename T>
void DynamicArray<T>::reserve(std::size_t reservedSpace) {
    if (reservedSpace > capacity) {
        T* newArray = new T[reservedSpace];
        for (std::size_t i = 0; i < arraySize; ++i) {
            newArray[i] = array[i];
        }
        delete[] array;
        array = newArray;
        capacity = reservedSpace;
    }
}

template<typename T>
std::size_t DynamicArray<T>::getCapacity() const {
    return capacity;
}

template<typename T>
void DynamicArray<T>::shrinkToFit() {
    if (arraySize < capacity) {
        T* newArray = new T[arraySize];
        for (std::size_t i = 0; i < arraySize; ++i) {
            newArray[i] = array[i];
        }
        delete[] array;
        array = newArray;
        capacity = arraySize;
    }
}

template<typename T>
void DynamicArray<T>::pop_back() {
    if (arraySize > 0) {
        --arraySize;
    }
}

template<typename T>
T DynamicArray<T>::back() const {
    if (arraySize > 0) {
        return array[arraySize - 1];
    }
    return T();
}

template<typename T>
bool DynamicArray<T>::operator==(const DynamicArray& other) const {
    if (arraySize != other.arraySize) {
        return false;
    }
    for (std::size_t i = 0; i < arraySize; ++i) {
        if (array[i] != other.array[i]) {
            return false;
        }
    }
    return true;
}