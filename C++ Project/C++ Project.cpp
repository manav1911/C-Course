//
#include<iostream>
#include<string>
using namespace std;

class Person {
private:
	int age;
	string name;

public:
	Person(int age, string name) {
		this->age = age;
		this->name = name;
	}

	void printValue() {
		cout << "Age: " << age << endl;
		cout << "Name: " << name << endl;
	}
};

int main() {
	Person a(45, "John");

	a.printValue();

	return 0;
}
