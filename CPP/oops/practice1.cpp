#include<bits/stdc++.h>
using namespace std;

class Circle{
    int radius;
public:
    Circle(double r) : radius(r) {}
    double area() { return 3.14 * radius * radius; }

};

class Cylinder{
    Circle base;
    int height;
public:
    Cylinder(int r, int h) : base(r), height(h) {}
    double volume() { return base.area() * height; }
};

int main(){

    return 0;
}