#include <iostream>
#include "header.h"

void translateArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
            arr[i] = 0;

        if (arr[i] > 0)
            arr[i] *= 2;
    }

}
void toUppercase(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {        
        if (str[i] >= 97 || str[i] <= 122)
            str[i] = toupper(str[i]);
    }
}
bool isPalindrom(const char str[])
{
    int count_str = strlen(str);
    for (int i = 0; i < count_str / 2; ++i) {
        if (str[i] != str[count_str - i - 1]) {
            return false;
        }
    }
    return true;
}
void parseStringLetters(const char str[], int& vowelsCount, int& consonantsCount) 
{
    vowelsCount = 0;
    consonantsCount = 0;
    for (int i = 0; str[i] != '\0'; ++i) 
    {
        char c = toupper(str[i]);
        if (c >= 'A' && c <= 'Z')
        {
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') 
                ++vowelsCount;            
            else 
                ++consonantsCount;
            
        }
    }
}
bool isEqual(const char str1[], const char str2[])
{
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] != str2[i]) 
            return false;
        
        ++i;
    }
    return true;
}