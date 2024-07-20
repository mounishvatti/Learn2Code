#include <iostream>
using namespace std;

class ReserveBank;

class childClass{
    public:
        void frifunc_changePwd(ReserveBank &obj, int newPwd);
};

class ReserveBank
{
private:
    int cvv = 619;
    int accNo;
    int pwd = 1111;
    int val = 10;

protected:
    int dob;

public:
    string customerName;

public:
    ReserveBank() {}
    ReserveBank(int cvv, int accNo, int dob, string customerName) : cvv(cvv), accNo(accNo), dob(dob), customerName(customerName) {}

    friend class F;

    friend void friendFunction_setVal(ReserveBank &obj, int newVal);

    friend void childClass::frifunc_changePwd(ReserveBank &obj, int newPwd);
};

void friendFunction_setVal(ReserveBank &obj, int newVal)
{
    obj.val = newVal;
}

class Pockets : protected ReserveBank
{
    void get_dob()
    {
        cout << "DOB: " << this->dob << endl;
    }
    void get_customerName()
    {
        cout << "Customer Name: " << this->customerName << endl;
    }
    // void change_pwd(int pwd){
    //     this->pwd = pwd;
    // }
};

class smallApp : public Pockets
{
    void change_userName(string uName)
    {
        this->customerName = uName;
    }

    void change_DOB(int dob)
    {
        this->dob = dob;
    }

    // void change_pwd(int pwd){
    //     this->pwd = pwd;
    // }
};

class F
{ // friend class - can access the private members
public:
    void changeCVV(ReserveBank &obj, int newCVV)
    {
        obj.cvv = newCVV;
    }
    void changepwd(ReserveBank &obj, int newpwd)
    {
        obj.pwd = newpwd;
    }
    void displayCVV(ReserveBank &obj)
    {
        cout << obj.cvv << endl;
    }
    void displayPwd(ReserveBank &obj)
    {
        cout << obj.pwd << endl;
    }
    void displayVal(ReserveBank &obj){
        cout << obj.val << endl;
    }
};

void childClass::frifunc_changePwd(ReserveBank &obj, int newPwd){
    obj.pwd = newPwd;
}

class Square
{
    int side;

public:
    Square(int side) : side(side) {} // constructor
    int area();                      // methods

}; // the struct or class expects an instance after the declaration, hence we use a semi-colon after the class

int Square::area()
{
    return this->side * this->side;
}

int main()
{
    // Square s2(5);
    // cout << s2.area() << endl;

    ReserveBank r1;

    F fri;
    fri.displayCVV(r1);
    fri.displayPwd(r1);

    fri.changepwd(r1, 2222);
    fri.displayPwd(r1);
    fri.displayVal(r1);
    friendFunction_setVal(r1, 20);
    fri.displayVal(r1);
}
