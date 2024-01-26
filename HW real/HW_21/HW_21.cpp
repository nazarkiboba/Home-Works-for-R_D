#include <iostream>
#include <vector>
#include <algorithm>

bool compareByLength(const std::string& str1, const std::string& str2) {
    return str1.length() < str2.length();
}

class LengthComparator {
public:
    bool operator()(const std::string& str1, const std::string& str2) const {
        return str1.length() < str2.length();
    }
};

int main() {
    std::vector<std::string> stringContainer = { "apple", "banana", "orange", "kiwi", "grape" };

    std::sort(stringContainer.begin(), stringContainer.end(), compareByLength);

    std::cout << "Sorted strings using simple function:" << std::endl;
    for (const auto& str : stringContainer) {
        std::cout << str << std::endl;
    }

    std::sort(stringContainer.begin(), stringContainer.end(), LengthComparator());

    std::cout << "\nSorted strings using functional object:" << std::endl;
    for (const auto& str : stringContainer) {
        std::cout << str << std::endl;
    }

    std::sort(stringContainer.begin(), stringContainer.end(), [](const std::string& str1, const std::string& str2) {
        return str1.length() < str2.length();
        });

    std::cout << "\nSorted strings using lambda:" << std::endl;
    for (const auto& str : stringContainer) {
        std::cout << str << std::endl;
    }

    std::vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int number = 2;
    unsigned int count = std::count_if(vec.begin(), vec.end(), [number](int x) { return x % number == 0; });
    std::cout << "\nNumber of elements divisible by " << number << ": " << count << std::endl;

    return 0;
}
