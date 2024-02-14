#include <iostream>
#include <cctype>
#include "header.h"

int main()
{
    std::cout << "First Work\n";
    constexpr int size_of_array = 10;
    int array[size_of_array]{};
    std::cout << "Enter the number in array\n";
    for (int i = 0; i < size_of_array; i++)
    {
        std::cout << "The position of array is "<<i<<",enter the number: ";
        std::cin >> array[i];
    }
    std::cout << "\n";
    translateArray(array, size_of_array);
    for (int i = 0; i < size_of_array; i++)
    {
        std::cout <<i<< " number is: "<<array[i]<<"\n";
        
    }

    std::cout << "\nSecound Work\n";
    char ch[100];
    std::cout << "Enter a word(simbols) and I will convert it to uppercase\n"<<"Input: ";    
    std::cin.getline (ch,100);
    toUppercase(ch);
    std::cout <<"Output: " << ch;

    std::cout << "\nThird Work\n";
    char character[100];
    std::cout << "Enter a string: ";
    std::cin.getline(character, 100);
    std::cout << "Is the entered string a palindrome? " << std::boolalpha << isPalindrom(character) << "\n";

    std::cout << "Fourth Work\n";
    char character_2[100];
    int vowelsCount = 0, consonantsCount = 0;
    std::cout << "Enter the word and I will count the vowels and consonants: ";
    std::cin >> character_2;
    parseStringLetters(character_2, vowelsCount, consonantsCount);
    std::cout << "Vowels: " << vowelsCount << ", Consonants: " << consonantsCount << "\n";

    char str1[100], str2[100];
    std::cout << "Enter two strings for comparison: ";
    std::cin.getline(str1, 100);
    std::cin.getline(str2, 100);
    std::cout << "Are the entered strings equal? " << std::boolalpha << isEqual(str1, str2) <<"\n";
}
