#include <iostream>

using namespace std;

class Student
{
    string name;
    int id;
    double grade;

public:
    // Constructor with initializer list
    Student(const string &studentName, int studentID, double studentGrade)
        : name(studentName), id(studentID), grade(studentGrade) {}

    // Setters
    void setName(const string &studentName) { name = studentName; }
    void setID(int studentID) { id = studentID; }
    void setGrade(double studentGrade) { grade = studentGrade; }

    // Getters
    string getName() const { return name; }
    int getID() const { return id; }
    double getGrade() const { return grade; }

    // Display student info
    void displayInfo() const
    {
        cout << "Student Name: " << name << "\n"
             << "Student ID: " << id << "\n"
             << "Student Grade: " << grade << endl;
    }
};

int main()
{
    Student student1("Ramadhanu", 123456789, 92.5);
    student1.displayInfo();
    return 0;
}
