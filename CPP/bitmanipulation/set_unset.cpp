#include<iostream>
using namespace std;

// check if the ith bit is set or not

bool check(int n, int i){
    if(n & (1 << i) > 0) return true;
    else return false;
}

int main(){
    int n = 13;
    int i = 2;
    cout << check(n, i);
}