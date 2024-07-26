#include<bits/stdc++.h>
using namespace std;

int main(){
    char c[5];
    c[0] = 'a';
    c[1] = 'b';
    c[2] = 'c';
    c[3] = 'd';
    c[4] = 'e';

    char *charPtr = c;
    
    cout << (void*)charPtr << ":" << *charPtr << endl;
    cout << (void*)(charPtr+1) << ":" << *(charPtr + 1) << endl;
    cout << (void*)(charPtr+2) << ":" << *(charPtr + 2) << endl;
    cout << (void*)(charPtr+3) << ":" << *(charPtr + 3) << endl;
    cout << (void*)(charPtr+4) << ":" << *(charPtr + 4) << endl;

    return 0;
}