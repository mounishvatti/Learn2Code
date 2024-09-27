// how to handle multiple inheritance ambiguity problem in C++

#include<iostream>
using namespace std;

class Parent1{
    public:
        void display(){
            cout << "Display from parent1 class" << endl;
        }
};

class Parent2{
    public:
        void display(){
            cout << "Display from parent2 class" << endl;
        }
};

class Child: public Parent1, public Parent2{
  public:
    void print(){
        cout << "Hello this is the child class" << endl;
    }
};

int main(){
    Child c;
    c.print();
    c.Parent1::display(); // Explicit call to Parent1's display method
    c.Parent2::display(); // Explicit call to Parent2's display method
}
