// Overloading
#include <iostream>

class Calculator {
public:
    void add(int a, int b) { // method overloading
        std::cout << "Adding " << a << " and " << b << std::endl;
    }

    void add(int a, int b, int c) {
        std::cout << "Adding " << a << " " << b << " and " << c << std::endl;
    }
};

int multiply(int a, int b){ // function overloading
    return a * b;
}

int multiply(int a, int b, int c){
    return a * b * c;
}

int main() {
    Calculator calc;
    calc.add(1, 2);
    calc.add(1, 2, 3);

    return 0;
}