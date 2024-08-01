#include <iostream>
using namespace std;

namespace math {
    double pi = 3.14;

    template <class T>
    T add(T a, T b) {
        return a + b;
    }

    template <class T>
    T sub(T a, T b) {
        return a - b;
    }

    template <class T>
    T mul(T a, T b) {
        return a * b;
    }

    template <class T>
    T div(T a, T b) {
        return a / b;
    }
}

int main() {
    cout << math::add<int>(10, 20) << endl;
    cout << math::add<double>(10.45, 20.07) << endl;
    cout << math::pi << endl;
    return 0;
}