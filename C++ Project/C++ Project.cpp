//
#include<iostream>
#include<string>
using namespace std;

class base {
public:
	virtual void show(){
		cout << "Base Class" << endl;
	}
};

class derived1 : public base {
public:
	void show() {
		cout << "Derived 1" << endl;
	}
};

class derived2 : public base {
public:
	void show() {
		cout << "Derived 2" << endl;
	}
};

int main() {
	base* ptr;
	ptr = new derived1;
	ptr->show();

	ptr = new derived2;
	ptr->show();

	return 0;
}
