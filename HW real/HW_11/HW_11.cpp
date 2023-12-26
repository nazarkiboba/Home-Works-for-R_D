#include <iostream>
/*
2)Функція bool isSorted(const int* arr, int size, SortingDirection direction) яка перевіряє, чи даний масив посортований за спаданням, зростанням, де SortingDirection :
enum class { ascending, descending }; -
3)Написати функції обходу двовимірного масива різними способами : рисунки в LMS


*/

bool find(int arr_2d[4][4], int toFind);

int main()
{
    {
        std::cout << "First Work!\n";
        int first_numbers;
        int secound_numbers;
        int third_numbers;
        int fourth_numbers;
        int ToFind;

        for (int r = 1; r <= 4; r++)
        {
            std::cout << "Enter the " << r << " number for the first row: ";
            std::cin >> first_numbers;
        }

        for (int a = 1; a <= 4; a++)
        {
            std::cout << "Enter the " << a << " number for the secound row: ";
            std::cin >> secound_numbers;
        }

        for (int b = 1; b <= 4; b++)
        {
            std::cout << "Enter the " << b << " number for the third row: ";
            std::cin >> third_numbers;
        }

        for (int c = 1; c <= 4; c++)
        {
            std::cout << "Enter the " << c << " number for the fourth row: ";
            std::cin >> fourth_numbers;
        }

        std::cout << "Now enter the number what are u want to find: ";
        std::cin >> ToFind;

        int array_2d[4][4]

        {
            {first_numbers},
            {secound_numbers},
            {third_numbers},
            {fourth_numbers}
        };

        find(array_2d, ToFind);
    }

    {
        std::cout << "Fourth Work!\n1)\n";
        const int r_and_c = 4;
        int g_2d[r_and_c][r_and_c]
        { {11,12,16,33},
         {55,65,75,77},
         {87,89,96,99},
         {101,202,303,404} };

        for (int rows = r_and_c - 1; rows > -1; rows--)
        {
            for (int columns = 0; columns < r_and_c; columns++)
            {
                std::cout << g_2d[columns][rows] << ",";
            }
            std::cout << "\b;\n";
        }
    }

    /*std::cout << "2)\n";
    const int r_and_c_1 = 4;
    int g_2d_1[r_and_c_1][r_and_c_1]
     {{-4,-3,-2,-1},
      {1,2,3,4},
      {5,6,7,8},
      {9,10,11,12}};

    for (int rows = r_and_c_1 - 1; rows > -1; rows--)
    {
        for (int columns = 0; columns < r_and_c_1; columns++)
        {
            std::cout << g_2d_1[columns][rows]<<",";
        }
        std::cout << "\b;\n";
    }*/

}

bool find(int arr_2d[4][4], int toFind)
{
    for (int e = 0; e < 4; e++)
    {
        for (int q = 0; q < 4; q++)
        {
           if (arr_2d[e][q] == toFind)
           {
             std::cout << "true\n";
             return true;
           }
           if(arr_2d[e][q] != toFind)
           {
               std::cout << "false\n";
             return false;
           }
        }
    }
}

