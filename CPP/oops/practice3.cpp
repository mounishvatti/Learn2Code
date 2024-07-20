#include <iostream>
#include "practice2.cpp"
using namespace std;

int main()
{
    Student s1(1, "Mounish", 22);
    s1.displayStudentInfo();
    s1.generateToken();

    Teacher t1;
    t1.markAttendance();

    Staff st1;
    st1.checkStaff();
    st1.markAttendance();

    Student *s2 = new Student(1, "Rahul", 21);
    s2->displayStudentInfo();
    s2->generateToken();

    delete s2;
}