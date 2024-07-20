#include <iostream>
using namespace std;

class Student
{
private:
    static string college;
    int studentID;
    string studentName;
    int studentAge;

public:
    Student(int studentID, string studentName)
    {
        this->studentID = studentID;
        this->studentName = studentName;
    }

    Student(int studentID, string studentName, int studentAge) // constructor overloading 
    {
        this->studentID = studentID;
        this->studentName = studentName;
        this->studentAge = studentAge;
    }

    void displayStudentInfo()
    {
        cout << "Student ID: " << this->studentID << endl;
        cout << "Student Name: " << this->studentName << endl;
        cout << "Student Age: " << this->studentAge << endl;
        cout << "College: " << this->college << endl;
    }

    void generateToken()
    {
        cout << "Your token has been generated" << endl;
    }
};
string Student::college = "VIT";

class Teacher
{
public:
    void markAttendance()
    {
        cout << "Attendance marked" << endl;
    }
};

class Staff : public Teacher
{ // inheritance
public:
    void checkStaff()
    {
        cout << "Staff ready!" << endl;
    }
};

