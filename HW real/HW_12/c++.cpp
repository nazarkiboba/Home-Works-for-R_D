#include <iostream>

const int ROWS = 3;
const int COLUMNS = 3;

// Enum ��� ���������� �������� ����������
enum class SortingDirection
{ ByRows, ByColumns };

// ������� ��� ����� ���� ����� ������
void swapRows(int arr[][ROWS], int row1, int row2)
{
    for (int i = 0; i < COLUMNS; ++i) {
        std::swap(arr[row1][i], arr[row2][i]);
    }
}

// ������� ��� ����� ���� �������� ������
void swapColumns(int arr[][COLUMNS], int col1, int col2, int size)
{
    for (int i = 0; i < size; ++i) {
        std::swap(arr[i][col1], arr[i][col2]);
    }
}

// ������� ��� ��������� ������ �� �������� ���������
int partition(int arr[][COLUMNS], SortingDirection direction, int low, int high) 
{
    int pivot;

    if (direction == SortingDirection::ByRows) {
        pivot = low;
    }
    else if (direction == SortingDirection::ByColumns) {
        pivot = low / COLUMNS;
    }

    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (direction == SortingDirection::ByRows) {
            if (arr[j][pivot] < arr[high][pivot]) {
                ++i;
                swapRows(arr, i, j);
            }
        }
        else if (direction == SortingDirection::ByColumns) {
            if (arr[j / COLUMNS][j % COLUMNS] < arr[high / COLUMNS][high % COLUMNS]) {
                ++i;
                swapColumns(arr, i, j, COLUMNS);
            }
        }
    }

    swapRows(arr, i + 1, high);

    return i + 1;
}

// ������� ������� ��� ������� ������������ �������� ����������
void quickSort(int arr[][COLUMNS], SortingDirection direction, int low, int high)
{
    if (low < high) {
        int pi = partition(arr, direction, low, high);

        quickSort(arr, direction, low, pi - 1);
        quickSort(arr, direction, pi + 1, high);
    }
}

// ������� ��� ���������� ����� ��� �������� ����������� ������ �� ��������� ������������� ������
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// ������� ��� ���������� ����� ��� �������� ����������� ������
void sort(int arr[][COLUMNS], SortingDirection direction, const int size)
{
    if (direction == SortingDirection::ByRows) {
        for (int i = 0; i < size; ++i) {
            bubbleSort(arr[i], COLUMNS);
        }
    }
    else if (direction == SortingDirection::ByColumns) {
        for (int i = 0; i < COLUMNS; ++i) {
            int tempArray[size];
            for (int j = 0; j < size; ++j) {
                tempArray[j] = arr[j][i];
            }
            bubbleSort(tempArray, size);
            for (int j = 0; j < size; ++j) {
                arr[j][i] = tempArray[j];
            }
        }
    }
}