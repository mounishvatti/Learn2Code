#include <iostream>
using namespace std;

/*
int - 4 bytes
char - 1 byte
double - 8 bytes
float - 4 bytes
long double - 16 bytes

pointer - 4 bytes
*/

int main(){

    int a = 1025;
    int *p;
    p = &a; 

    cout << "Size of integer = " << sizeof(int) << endl;
    cout << "Address = " << p  << " and value = " << *p << endl;
    cout << "Address = " << p+1  << " and value = " << *(p+1) << endl;

    cout << endl;

    char *c;
    c = (char*)p;

    cout << "Size of char = " << sizeof(char) << endl;
    cout << "Address = " << (void*)c  << " and value = " << static_cast<int>(*c) << endl;
    cout << "Address = " << (void*)c+1  << " and value = " << static_cast<int>(*(c+1)) << endl;
    return 0;
}                  