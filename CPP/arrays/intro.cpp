#include <iostream>
#include <array> // Add this line to include the <array> header file
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    array <int, 3> myArray {1,2,3};
    
    
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}