//
#include<iostream>
#include<string>
using namespace std;

class Test{
private:
	int *age;

public:
	Test() {
		age = new int();
		*age = 0;
		cout << "Default Constructor" << endl;
	}

	Test(int x) {
		age = new int();
		*age = x;
		cout << "Parametrized Constructor" << endl;
	}

	~Test() {
		delete age;
		cout << "Destructor" << endl;
	}
};

int main() {
	Test obj1;
	Test obj2(10);
	return 0;
}
