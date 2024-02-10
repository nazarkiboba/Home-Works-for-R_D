#include <iostream>
#include <string>

enum class SortingDirection { ascending, descending };

const int ROWS = 3;
const int COLUMNS = 3;

int isSorted(const int* arr, int size, SortingDirection direction)
{
    if (direction == SortingDirection::ascending || direction == SortingDirection::descending) 
    {
        for (int i = 0; i < size - 1; ++i)
        {
            if (direction == SortingDirection::ascending )
            {
                if (arr[i] > arr[i + 1])
                    return -1;
            }

            if (direction == SortingDirection::descending)
            {
                if (arr[i] < arr[i + 1])
                    return 0;
            }
        }

        if(direction != SortingDirection::ascending && direction != SortingDirection::descending == false)
        
            return 1;
        
    }
    
}

bool find(int arr_2d[ROWS][COLUMNS], int toFind)
{
    for (int i = 0; i < ROWS; ++i) 
        for (int j = 0; j < COLUMNS; ++j) 
            if (arr_2d[i][j] == toFind) 
                return true;
                
    return false;
}
/*
int arr[ROWS][COLUMNS] =
{
   {1, 2, 3},
   {4, 5, 6},
   {7, 8, 9}
};
int arr[ROWS][COLUMNS] = 
    {
        {11, 9, 8},
        {7, 6, 5},
        {4, 3, 2}
    };
*/
int main() 
{    
    int arr[ROWS][COLUMNS] =
    {
       {111, 2, 3},
       {41, 51, 6},
       {7, 18, 19}
    };

    int toFind;
    SortingDirection direction = SortingDirection::ascending;
    int check = isSorted(*arr, ROWS * COLUMNS, direction);
    std::string answer;

    std::cout << "Enter the number withc u want to find: ";
    std::cin >> toFind;
    std::cout << "Number " << toFind << " is found: " << std::boolalpha << find(arr, toFind) << "\n";

    
    if (check == 0)
    {
        answer = "array sorted in ascending;\n";
    }
    if (check == -1)
    {
        answer = "array sorted in descending;\n";
    }
    if (check == 1)
    {
        answer = "array sorted no in ascending,and no in descending;\n";
    }

    std::cout << "Array is sorted in: " << answer << "\n";
}

