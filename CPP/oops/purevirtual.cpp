#include<iostream>
using namespace std;

class Base{
public:
    virtual void display() = 0;
};

class Derived : public Base{
public:
    void display(){
        cout << "Display from derived class" << endl;
    }
};

class Derived2 : public Derived{
    public:
        void display(){
            cout << "Display from derived2 class" << endl;
        }
};

int main(){
    //Base* b1 = new Base(); -  not allowed 

    Base* obj = new Derived();
    obj->display();

    Derived* d2 = new Derived2();

    Derived d;
    d.display();

    Derived2 d1;
    d1.display(); 
    d2->display();

    delete obj;
    delete d2;
}