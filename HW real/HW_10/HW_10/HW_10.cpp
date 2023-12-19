#include <iostream>
#include <string>

void swap  (int& a, int& b);
void swap2 (int* a, int* b);
void array_Sum (int array, int Size);

int main()
{
        static std::string my_string1 = "Enter the first number to change it with the secound: ";
        static std::string my_string2 = "Enter the secound number to change it with the first: ";

    {
        int a;
        int b;
        std::cout << "First Work!\n";
        std::cout << "1)\n";
        std::cout << my_string1;
        std::cin >> a;
        std::cout << my_string2;
        std::cin >> b;
        swap(a, b);
        std::cout << "first number: " << a << "\n";
        std::cout << "secound number: " << b << "\n";
    }

    {
        std::cout << "\n2)\n";
        int c;
        int d;
        std::cout << my_string1;
        std::cin >> c;
        std::cout << my_string2;
        std::cin >> d;
        swap2(&c, &d);
        std::cout << "first number: " << c << "\n";
        std::cout << "secound number: " << d << "\n";
    }
    
    std::cout << "\nSecound Work!\n";
    int e;
    int f = 0; {};
    int i = 0;
    std::cout << "Enter the array size(from 1 to 10): ";
    std::cin >> e;
    while (i < 1)
    {
        i++;
        if (e < 1 || e > 10)
        {
            std::cout << "WRONG!\n";
            break;
        }
        for (int r = 1; r <= e; r++)
        {
            std::cout << "Enter the number " << r << ": ";
            std::cin >> f;
        }
        int g[]{f};
        array_Sum(*g, e);
    }
    


}

void swap (int& a, int& b)
{
    int changer = a;
    a = b;
    b = changer;


}

void swap2 (int* a, int* b)
{
    int changer = *a;
    *a = *b;
    *b = changer;
}

void array_Sum (int array, int Size)
{
    Size = 0;
    int sum = array[&Size] + array[&Size + 1] + array[&Size+2] + array[&Size+3] + array[&Size+4] + array[&Size+5] + array[&Size+6] + array[&Size+7] + array[&Size+8] + array[&Size+9];
    if (sum == 0)
    {
        std::cout << "zero";
    }
    if (sum > 0)
    {
        std::cout << "true";
    }
    if (sum < 0)
    {
        std::cout << "false";
    }
   
}

