#include <iostream>
#include <cctype>

void translateArray(int numbers[], int size) {
    for (int i = 0; i < size; ++i) {
        if (numbers[i] > 0) {
            numbers[i] *= 2;
        }
        else {
            numbers[i] = 0;
        }
    }
}

void toUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = toupper(str[i]);
    }
}

bool isPalindrome(const char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        ++len;
    }
    for (int i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

void parseStringLetters(const char str[], int& vowelsCount, int& consonantsCount) {
    vowelsCount = 0;
    consonantsCount = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        char c = toupper(str[i]);
        if (c >= 'A' && c <= 'Z') {
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                ++vowelsCount;
            }
            else {
                ++consonantsCount;
            }
        }
    }
}

bool isEqual(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return false;
        }
        ++i;
    }
    return true;
}

int main() {
    int numbers[5];
    std::cout << "Enter 10 numbers for the array: ";
    for (int i = 0; i < 5; ++i) {
        std::cin >> numbers[i];
    }
    translateArray(numbers, 5);
    std::cout << "Translated Array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    char str[100];
    std::cout << "Enter a string: ";
    std::cin.ignore(); 
    std::cin.getline(str, 100);
    toUppercase(str);
    std::cout << "Uppercase String: " << str << std::endl;

    std::cout << "Is the entered string a palindrome? " << std::boolalpha << isPalindrome(str) << std::endl;

    int vowelsCount = 0, consonantsCount = 0;
    parseStringLetters(str, vowelsCount, consonantsCount);
    std::cout << "Vowels: " << vowelsCount << ", Consonants: " << consonantsCount << std::endl;

    char str1[100], str2[100];
    std::cout << "Enter two strings for comparison: ";
    std::cin.ignore(2); 
    std::cin.getline(str1, 100);
    std::cin.getline(str2, 100);
    std::cout << "Are the entered strings equal? " << std::boolalpha << isEqual(str1, str2) << std::endl;

    return 0;
}

