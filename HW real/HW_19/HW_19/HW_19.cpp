#include <iostream>
#include "copy_vector.h"

int main()
{
    std::cout << "How many numbers u wont to write: ";
    int x, How_many_times_do_you_need_to_loop;
    std::cin >> How_many_times_do_you_need_to_loop;
    std::cout<< "Enter the tree numbers: ";
    DynamicIntArray arr;
    for(int i=0;i<How_many_times_do_you_need_to_loop;i++)
    {
        std::cin >> x;
        arr.append(x);
    }
    std::cout << "Your numbers are: ";
    for (std::size_t i = 0; i < arr.getSize(); ++i) 
        std::cout << arr[i] << " ";
    
    std::cout << "\n";

}

