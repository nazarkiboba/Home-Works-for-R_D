#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <sstream>


unsigned int uniqueWordsCount(const std::string& line) {
    std::istringstream iss(line);
    std::unordered_set<std::string> words;
    std::string word;
    while (iss >> word) {
        words.insert(word);
    }
    return words.size();
}


std::string mostOccuredWord(const std::string& line) {
    std::istringstream iss(line);
    std::unordered_map<std::string, int> wordCounts;
    std::string word;
    while (iss >> word) {
        wordCounts[word]++;
    }
    int maxCount = 0;
    std::string mostOccuredWord;
    for (const auto& pair : wordCounts) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostOccuredWord = pair.first;
        }
    }
    return mostOccuredWord;
}


bool areBracketsBalanced(const std::string& line) {
    std::stack<char> brackets;
    for (char c : line) {
        if (c == '(' || c == '[' || c == '{') {
            brackets.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (brackets.empty()) return false;
            char top = brackets.top();
            brackets.pop();
            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                return false;
            }
        }
    }
    return brackets.empty();
}


struct Node {
    int data;
    Node* next;
};


bool has_cycle(Node* head) {
    if (!head) return false;
    Node* slow = head;
    Node* fast = head->next;
    while (fast && fast->next) {
        if (slow == fast) return true;
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}

int main() {
    
    std::string line = "Hello Hey Hello Bye Hey";
    std::cout << "Unique words count: " << uniqueWordsCount(line) << std::endl;
    std::cout << "Most occurred word: " << mostOccuredWord(line) << std::endl;

    std::string balanced = "{ [()][ ] }()";
    std::string notBalanced = "[{]}";

    std::cout << "Are brackets balanced (balanced): " << areBracketsBalanced(balanced) << std::endl;
    std::cout << "Are brackets balanced (not balanced): " << areBracketsBalanced(notBalanced) << std::endl;

    
    Node* head = new Node{ 1, nullptr };
    Node* second = new Node{ 2, nullptr };
    Node* third = new Node{ 3, nullptr };
    head->next = second;
    second->next = third;
    third->next = head; 

    std::cout << "Has cycle: " << has_cycle(head) << std::endl;

    
    delete third;
    second->next = nullptr; 
    delete second;
    delete head;

    return 0;
}
