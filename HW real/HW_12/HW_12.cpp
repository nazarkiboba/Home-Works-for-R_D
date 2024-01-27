#include <iostream>
#include "header.h"

const int ROWS = 3;
const int COLUMNS = 3;

int main()
{
    int arr[ROWS][COLUMNS] = { {3, 1, 4}, {1, 5, 9}, {2, 6, 5} };

    // Сортування рядків
    sort(arr, SortingDirection::ByRows, ROWS);

    std::cout << "Sorted by rows:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    // Сортування стовпців
    sort(arr, SortingDirection::ByColumns, COLUMNS);

    std::cout << "\nSorted by columns:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}