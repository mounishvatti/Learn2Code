// classes example
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle(int,int);
    void set_values (int,int);
    int area() {return width*height;}
};

Rectangle::Rectangle (int x, int y) : width(x), height(y) {}
Rectangle::Rectangle (int x, int y) { width = x; height = y; }


void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
    Rectangle rect (3,4);
    Rectangle rect1 {4,5};
    Rectangle rect2 = {5,6};
    Rectangle rect3 = Rectangle(6,7);
    Rectangle rect4 = Rectangle{7,8};
    Rectangle* rect5 = new Rectangle(9,10);
    rect.set_values (3,4);
    cout << "area: " << rect.area();
    return 0;
}
