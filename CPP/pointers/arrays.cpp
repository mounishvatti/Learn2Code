#include <iostream>
#include <vector>
using namespace std;

int computeSum(vector<int> arr){
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

void alterArray(vector<int> &arr, int index, int value){ // pass by reference
    arr[index] = value;
    cout << arr[index] << endl;
}

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    cout << a[0]; 
    cout << a[1];
    cout << a[2];
    cout << a[3];
    cout << a[4];

    cout << endl;

    int *p = a;
    cout << *p;       // 1
    cout << *(p + 1); // 2
    cout << *(p + 2); // 3
    cout << *(p + 3); // 4
    cout << *(p + 4); // 5

    cout << endl;

    cout << p << endl;
    cout << (p + 1) << endl;
    cout << (p + 2) << endl;
    cout << (p + 3) << endl;
    cout << (p + 4) << endl;

    vector<int> arr = {1, 2, 3, 4, 5};

    cout << computeSum(arr) << endl;

    alterArray(arr, 0, 10);
    cout << arr[0] << endl;
} 