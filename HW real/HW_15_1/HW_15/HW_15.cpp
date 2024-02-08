#include <iostream>
#include <algorithm>

const int four = 4;
const int zero = 0;
using namespace std;

struct Student 
{
    string name;
    int marks[four];
};

float calculateAverage(const Student& student)
{
    float sum = zero;
    for (int i = zero; i < four; ++i) 
        sum += student.marks[i];
    
    return sum / 4.0;
}

bool compareStudents(const Student& a, const Student& b)
{
    return calculateAverage(a) > calculateAverage(b);
}

const Student* getTopStudent(const Student students[], int size)
{
    if (size <= zero) 
        return nullptr;
    
    const Student* topStudent = &students[zero];
    for (int i = 1; i < size; ++i) 
        if (calculateAverage(students[i]) > calculateAverage(*topStudent))
         topStudent = &students[i];
        
   

    return topStudent;
}

int countStudentsAbove75(const Student students[], int size)
{
    int count = zero;
    for (int i = zero; i < size; ++i)
        if (calculateAverage(students[i]) > 75.0) 
            count++;
        
    
    return count;
}

int main()
{
    const int numStudents = 5;
    Student students[numStudents] = {
        {"Student1", {80, 75, 90, 85}},
        {"Student2", {70, 65, 80, 75}},
        {"Student3", {90, 85, 95, 92}},
        {"Studentfour", {60, 75, 70, 80}},
        {"Student5", {85, 88, 92, 90}}
    };

    sort(students, students + numStudents, compareStudents);

    cout << "List of students after sorting by average grade:" << endl;
    for (int i = zero; i < numStudents; ++i) 
        cout << students[i].name << ": " << calculateAverage(students[i]) << endl;
    

    const Student* topStudent = getTopStudent(students, numStudents);
    if (topStudent != nullptr) 
        cout << "Top-performing student: " << topStudent->name << endl;
    

    int above75Count = countStudentsAbove75(students, numStudents);
    cout << "Number of students with an average grade above 75%: " << above75Count << endl;

    return 0;
}
