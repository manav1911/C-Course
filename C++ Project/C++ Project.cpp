//
#include<iostream>
#include<string>
using namespace std;

class Person {
private:
	string name;
	int age;
	float height;

public:
	/*Person() {
		name = "Null";
		age = 0;
		height = 0.0f;
	}*/

	Person(string name_a, int age_a, float height_a) {
		name = name_a;
		age = age_a;
		height = height_a;
	}

	Person(Person& obj2) {
		name = obj2.name;
		age = obj2.age;
		height = obj2.height;
	}

	void getData() {
		cout << endl << "Name: " << name;
		cout << endl << "Age: " << age;
		cout << endl << "Height: " << height;
	}
};

int main() {
	/*Person obj;*/
	Person obj2("MP", 24, 5.10f), obj3(obj2);
	/*obj.getData();*/
	obj2.getData();
	obj3.getData();
	return 0;
}
