#include <iostream>
#include <algorithm>

struct Student {
    std::string name;
    int marks[4];
};

float calculateAverage(const Student& student) {
    float sum = 0;
    for (int i = 0; i < 4; ++i) {
        sum += student.marks[i];
    }
    return sum / 4.0;
}

bool compareStudents(const Student& a, const Student& b) {
    return calculateAverage(a) > calculateAverage(b);
}

const Student* getTopStudent(const Student students[], int size) {
    if (size <= 0) {
        return nullptr;
    }

    const Student* topStudent = &students[0];
    for (int i = 1; i < size; ++i) {
        if (calculateAverage(students[i]) > calculateAverage(*topStudent)) {
            topStudent = &students[i];
        }
    }

    return topStudent;
}

int countStudentsAbove75(const Student students[], int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (calculateAverage(students[i]) > 75.0) {
            count++;
        }
    }
    return count;
}

int main() {
    const int numStudents = 5;
    Student students[numStudents] = {
        {"Student1", {80, 75, 90, 85}},
        {"Student2", {70, 65, 80, 75}},
        {"Student3", {90, 85, 95, 92}},
        {"Student4", {60, 75, 70, 80}},
        {"Student5", {85, 88, 92, 90}}
    };

    std::sort(students, students + numStudents, compareStudents);

    std::cout << "List of students after sorting by average grade:" << std::endl;
    for (int i = 0; i < numStudents; ++i) {
        std::cout << students[i].name << ": " << calculateAverage(students[i]) << std::endl;
    }

    const Student* topStudent = getTopStudent(students, numStudents);
    if (topStudent != nullptr) {
        std::cout << "Top-performing student: " << topStudent->name << std::endl;
    }

    int above75Count = countStudentsAbove75(students, numStudents);
    std::cout << "Number of students with an average grade above 75%: " << above75Count << std::endl;

    return 0;
}

