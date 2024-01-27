#pragma once

enum class SortingDirection { ByRows, ByColumns };
void swapRows(int arr[][ROWS], int row1, int row2);
void swapColumns(int arr[][COLUMNS], int col1, int col2, int size);
int partition(int arr[][COLUMNS], SortingDirection direction, int low, int high);
void quickSort(int arr[][COLUMNS], SortingDirection direction, int low, int high);
void bubbleSort(int arr[], int size);
void sort(int arr[][COLUMNS], SortingDirection direction, const int size);