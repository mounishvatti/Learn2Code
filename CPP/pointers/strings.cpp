#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hello";
    char *p = &str[0];
    cout << "Address = " << (void*)&str[0] << " and value = " << *p << endl;
    cout << "Address = " << (void*)(p+1) << " and value = " << *(p+1) << endl;
    cout << "Address = " << (void*)(p+2) << " and value = " << *(p+2) << endl;
    cout << "Address = " << (void*)(p+3) << " and value = " << *(p+3) << endl;
    cout << "Address = " << (void*)(p+4) << " and value = " << *(p+4) << endl;

    /*

    Using (void*) when printing pointers in C++ is a good practice to ensure the address is printed correctly as a memory address, especially when dealing with char* pointers, to avoid any unintended behavior from the type-specific overloads of cout. This makes the output consistent and predictable.

    Without void* Cast:

	    • cout << &str[0] prints the string “Hello” because &str[0] is a char* and cout has an overload for char* that prints it as a C-style string.

	    • cout << p + 1 prints “ello” for the same reason as above.

    */

    return 0;
}