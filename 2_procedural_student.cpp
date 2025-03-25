#include <iostream>

using namespace std;

// Define a structure to hold student information
struct Student
{
    string name;
    int id;
    double grade;
};

// Function to create and return a Student
Student createStudent(const string &name, int id, double grade)
{
    return {name, id, grade}; // Uses aggregate initialization
}

// Function to display student information
void displayStudent(const Student &s)
{
    cout << "Student Name: " << s.name << "\n"
         << "Student ID: " << s.id << "\n"
         << "Student Grade: " << s.grade << endl;
}

int main()
{
    // Create and display student
    Student student1 = createStudent("Ramadhanu", 123456789, 92.5);
    displayStudent(student1);

    return 0;
}
