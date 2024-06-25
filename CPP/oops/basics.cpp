#include <iostream>
using namespace std;

//public private protected - access modifiers


class Test{
	// members or properties of the class (private by default)
	int val;   
	string name;

public:
	// constructor: automatically called when an object is created;
	// these are examples of multiple constructors created to cater all types of inputs 
	Test(int val, string name){
		this->val = val;
		this->name = name;
	}

	Test(int val){
		this->val = val;
	}

	Test(string name){
		this->name = name;
	}

	Test(){}

	// member functions (setters, getters, and other functions)

	void setVal(int val){
		this->val = val;
	}

	void setName(string name){
		this->name = name;
	}

	void getVal(){
		cout << this->val << endl;
	}

	void getName(){
		cout << this->name << endl;
	}

	// destructor: automatically called when an object is created statically
	~Test(){
		cout << "Destructor called" << endl;
	}

};

int main(){
	Test t1;

	t1.setName("Mounish");

	t1.getName();
}