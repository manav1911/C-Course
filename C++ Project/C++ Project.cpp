//
#include<iostream>
#include<string>
using namespace std;

class Phone {
private:
	string name;
	string processor;
	int RAM;
	int battery;

public:
	Phone(string name_a = "NULL", string processor_a = "NULL", int RAM_a = 0, int battery_a = 0) {
		name = name_a;
		processor = processor_a;
		RAM = RAM_a;
		battery = battery_a;
	}

	Phone(Phone& mobile) {
		name = mobile.name;
		processor = mobile.processor;
		RAM = mobile.RAM;
		battery = mobile.battery;
	}

	void getData();
};

void Phone::getData() {
	cout << "The name of the phone is: " << name << endl;
	cout << "The processor of the phone is: " << processor << endl;
	cout << "The RAM of the phone is: " << RAM << endl;
	cout << "The battery capacity of the phone is: " << battery << endl;
}

int main() {
	string name;
	string processor;
	int RAM;
	int battery;

	cout << "Enter the name of the phone: ";
	getline(cin, name);

	cout << "Enter the processor of the phone: ";
	getline(cin, processor);

	cout << "Enter the RAM of the phone: ";
	cin >> RAM;

	cout << "Enter the battery capacity of the phone: ";
	cin >> battery;

	Phone obj;
	Phone obj2(name, processor, RAM, battery);
	Phone obj3(obj2);

	cout << "The details of the phone you entered is: " << endl;
	obj2.getData();
	cout << " " << endl;


	return 0;
}
