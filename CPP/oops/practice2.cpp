#include <iostream>
using namespace std;

class Student{
private:
    static string college;
    int studentID;
    string studentName;
    int studentAge;

public:
    Student(int studentID, string studentName, int studentAge){
        this->studentID = studentID;
        this->studentName = studentName;
        this->studentAge = studentAge;
    }

    void displayStudentInfo(){
        cout << "Student ID: " << this->studentID << endl;
        cout << "Student Name: " << this->studentName << endl;
        cout << "Student Age: " << this->studentAge << endl;
        cout << "College: " << this->college << endl; 
    }

    void generateToken(){
        cout << "Your token has been generated" << endl;
    }

};
string Student::college ="VIT";



int main(){
    Student* s1 = new Student(1, "Mounish", 22);
    s1->displayStudentInfo();
    s1->generateToken();
}