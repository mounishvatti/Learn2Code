#include <bits/stdc++.h>
using namespace std;

class deepCopy{
    int* a;
public:
    // constructor
    deepCopy(int val){
        a = new int(val);
    }

    // copy constructor (deep copy)
    deepCopy(const deepCopy &obj){
        a = new int(*(obj.a));
    }
    // destructor
    ~deepCopy(){
        delete a;
    }

    void setVal(int val){
        *a = val;
    }
    int getVal(){
        return *a;
    }
};

int main(){
    deepCopy obj1(10);
    deepCopy obj2 = obj1;

    obj1.setVal(20);
    cout << obj1.getVal() << endl;
    cout << obj2.getVal() << endl;
}