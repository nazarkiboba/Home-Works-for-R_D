#include <iostream>
#include <algorithm>

const int four = 4;

struct Student
{
    std::string name;
    int marks[four];
};

float calculateAverage(const Student& student)
{
    float sum = 0;
    for (int i = 0; i < four; ++i) 
        sum += student.marks[i];   
    return sum / 4.0;
}

bool compareStudents(const Student& a, const Student& b)
{
    return calculateAverage(a) > calculateAverage(b);
}

const Student* getTopStudent(const Student students[], int size)
{
    if (size <= 0) 
        return nullptr;

    const Student* topStudent = &students[0];
    float topAverage = calculateAverage(*topStudent);

    for (int i = 1; i < size; ++i) 
    {
        float currentAverage = calculateAverage(students[i]);
        if (currentAverage > topAverage) 
        {
            topStudent = &students[i];
            topAverage = currentAverage;
        }
    }


    return topStudent;
}

int countStudentsAbove75(const Student students[], int size,const int mark) 
{
    int count = 0;
    for (int i = 0; i < size; ++i) 
        if (calculateAverage(students[i]) > mark) 
            count++;    
    return count;
}

int main() 
{
    const int numStudents = 5;
    Student students[numStudents] = 
    {
        {"Student1", {80, 75, 90, 85}},
        {"Student2", {70, 65, 80, 75}},
        {"Student3", {90, 85, 95, 92}},
        {"Studentfour", {60, 75, 70, 80}},
        {"Student5", {85, 88, 92, 90}}
    };

    std::sort(students, students + numStudents, compareStudents);

    std::cout << "List of students after sorting by average grade:" << "\n";
    for (int i = 0; i < numStudents; ++i) 
        std::cout << students[i].name << ": " << calculateAverage(students[i]) << "\n";
    

    const Student* topStudent = getTopStudent(students, numStudents);
    if (topStudent != nullptr) 
        std::cout << "Top-performing student: " << topStudent->name << "\n";
    
    const float mark = 75.0;
    int above75Count = countStudentsAbove75(students, numStudents,mark);
    std::cout << "Number of students with an average grade above 75%: " << above75Count << "\n";

}