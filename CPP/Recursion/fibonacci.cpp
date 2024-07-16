#include<iostream>
#include<vector>
using namespace std;

int fibonacci(int n){ // Time complexity: (2^n) exponential, Space complexity O(N)
    if(n==0 || n==1){
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int fibonacci_n(int n){ // Time complexity O(N), Space complexity O(1)
    if(n==0 || n==1){
        return n;
    }
    int a=0, b=1, c;
    for(int i=2; i<=n; i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main(){
    int n = 10;

    vector<int>fibonacci_series;

    int first = 0;
    int second = 1;
    for(int i=0; i<=n; i++){
        fibonacci_series.push_back(first);
        int next = first + second;
        first = second;
        second = next;
    }
    for (auto it: fibonacci_series){
        cout<<it<<" ";
    }
    cout<<endl;
    cout << fibonacci(n) << endl;
    cout << fibonacci_n(n) << endl;
}