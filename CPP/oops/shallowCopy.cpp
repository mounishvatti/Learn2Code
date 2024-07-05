#include <bits/stdc++.h>
using namespace std;

class ShallowCopy{
    int* a;
    
public:
    // constructor
    ShallowCopy(int val){
        a = new int(val);
    }

    // copy constructor (shallow copy)
    ShallowCopy(const ShallowCopy &obj){
        a = obj.a;
    }
    // destructor
    ~ShallowCopy(){
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
    ShallowCopy obj1(10);
    ShallowCopy obj2 = obj1;

    obj1.setVal(20);
    cout << obj1.getVal() << endl;
    cout << obj2.getVal() << endl;
}