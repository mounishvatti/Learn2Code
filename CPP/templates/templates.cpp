#include <iostream>
using namespace std;

template <class T>
T sum (T a, T b){
    return a+b;
}

int main() {
    int a = 10, b = 30;

    double c = 1.45, d = 4.67;

    cout << sum<int>(a, b) << endl;
    cout << sum<double>(c, d) << endl;
    
    return 0;
}