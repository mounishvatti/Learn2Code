#include <iostream>
#include <string>

// Abstract class
class Shape {
public:
    // Pure virtual function providing interface framework
    virtual void draw() = 0;
    virtual double area() = 0; 

    // Non-pure virtual function
    void setColor(const std::string& color) {
        this->color = color;
    }

    std::string getColor() const {
        return color;
    }

protected:
    std::string color;
};

// Derived class
class Circle : public Shape {
public:
    Circle(double radius) : radius(radius) {}

    void draw() override {
        std::cout << "Drawing a Circle" << std::endl;
    }

    double area() override {
        return 3.14159 * radius * radius;
    }

private:
    double radius;
};

// Derived class
class Rectangle : public Shape {
public:
    Rectangle(double width, double height) : width(width), height(height) {}

    void draw() override {
        std::cout << "Drawing a Rectangle" << std::endl;
    }

    double area() override {
        return width * height;
    }

private:
    double width, height;
};

int main() {
    // Creating objects of derived classes
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Setting colors
    circle.setColor("Red");
    rectangle.setColor("Blue");

    std::cout << "Circle color: " << circle.getColor() << std::endl;
    circle.draw();
    std::cout << "Circle area: " << circle.area() << std::endl;

    std::cout << "Rectangle color: " << rectangle.getColor() << std::endl;
    rectangle.draw();
    std::cout << "Rectangle area: " << rectangle.area() << std::endl;

    return 0;
}