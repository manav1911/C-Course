//
#include<iostream>
#include<string>
using namespace std;

class Parent {    //Abstract Class
public:
	virtual void show() {
		cout << "Bun" << endl;
	}
};

class boy : public Parent {
public:
	void show() {
		cout << "Blue Bun" << endl;
	}
};

class girl : public Parent {
public:
	void show() {
		cout << "Pink Bun" << endl;
	}
};

int main() {
	Parent* ptr;

	ptr = new boy();
	ptr->show();

	ptr = new girl();
	ptr->show();

	return 0;
}
