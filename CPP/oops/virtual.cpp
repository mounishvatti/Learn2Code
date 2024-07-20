#include<iostream>
using namespace std;

class Base{
    public:
        virtual void display(){
            cout << "Display from base class" << endl;
        }
};

class Derived : public Base{
    public:
        void display() override{
            cout << "Display from derived class" << endl;
        }
};

int main(){
    Base* b1 = new Base();
    Base* obj = new Derived();
    b1->display();
    obj->display();

    delete b1;
    delete obj;
}