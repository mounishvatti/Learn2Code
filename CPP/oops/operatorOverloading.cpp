#include <iostream>

class Vector {
public:
    int x, y;

    Vector(int x, int y) : x(x), y(y) {}

    // Overloading the + operator
    Vector operator+(const Vector& v) {
        return Vector(x + v.x, y + v.y);
    }

    void display() {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Vector v1(1, 2);
    Vector v2(3, 4);
    Vector v3 = v1 + v2;  // Using the overloaded + operator
    v3.display();  // Output: (4, 6)
    return 0;
}