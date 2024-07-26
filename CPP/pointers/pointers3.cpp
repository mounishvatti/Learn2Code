#include <iostream>
using namespace std;

void Increment(int &a){
    a = a + 1;
    cout << "Address of 'a' in (Increment) function: " << &a << endl;
}

void Increment2(int a){
    a = a + 1;
    cout << "Address of 'a' in (Increment2) function: " << &a << endl;
}

void Increment3(int *a){
    (*a) = (*a) + 1;
    cout << "Address of 'a' in (Increment3) function: " << a << endl;
}

int main(){
    int a = 5;
    cout << "Address of 'a' in main function: " << &a << endl;

    Increment(a);
    Increment2(a);
    Increment3(&a);

    cout << a << endl;
}