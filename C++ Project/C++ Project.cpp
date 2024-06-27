//
#include<iostream>
#include<string>
using namespace std;

struct camera {
	int front;
	int rear;
};

struct phone {
	string name;
	int RAM;
	int ROM;
	string processor;
	camera camera;
	double price;
};

int main() {
	phone moto;

	moto.name = "SamMoto";
	moto.processor = "Snapdragon";
	moto.price = 4500;
	moto.camera.front = 15;
	moto.camera.rear = 32;
	moto.RAM = 16;
	moto.ROM = 132;

	cout << "Name: " << moto.name << endl;
	cout << "Processor: " << moto.processor << endl;
	cout << "Price: " << moto.price << endl;
	cout << "Front Camera: " << moto.camera.front << endl;
	cout << "Rear Camera: " << moto.camera.rear << endl;
	cout << "RAM: " << moto.RAM << endl;
	cout << "ROM: " << moto.ROM << endl;

	return 0;
}
