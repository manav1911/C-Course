//
#include<iostream>
#include<string>
using namespace std;

class Test {
private:
	int data;

public:
	void setData(int set) {
		data = set;
	}
	int getData() {
		return data;
	}
};

int main() {
	Test* ptr = new Test;

	ptr->setData(10);

	cout << "Value is: " << ptr->getData();

	return 0;
}
