#include <iostream>
#include "copy_vector.cpp"

int main()
{
    std::cout << "How many numbers do you want to write: ";
    int x, how_many_times_do_you_need_to_loop;
    std::cin >> how_many_times_do_you_need_to_loop;
    std::cout << "Enter the numbers: ";
    DynamicIntArray arr;

    // Перевірка push_back

    for (int i = 0; i < how_many_times_do_you_need_to_loop; ++i) {
        std::cin >> x;
        arr.push_back(x);
    }

    // Перевірка getSize

    std::cout << "Array size after push_back: " << arr.getSize() << std::endl;

    // Перевірка reserve
     
    //std::cout << "Enter new capacity for reserve: ";
    //int new_capacity;
    //std::cin >> new_capacity;
    //arr.reserve(new_capacity);
    //std::cout << "Array size after reserve: " << arr.getSize() << std::endl;
    
    // Перевірка setSize

    std::cout << "Enter new size: ";
    int new_size;
    std::cin >> new_size;
    arr.setSize(new_size);
    std::cout << "Array size after setSize: " << arr.getSize() << std::endl;
}