//
#include<iostream>
#include<string>
using namespace std;

class base {
public:
	base() {
		cout << "Default constructor of base class." << endl;
	}
	base(int b) {
		cout << "Para constrcutor of base class" << endl;
	}
};

class derived : public base {
	//EMPTY
};

int main() {
	derived d;


	return 0;
}
