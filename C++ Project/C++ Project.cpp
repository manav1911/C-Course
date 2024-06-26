//
#include<iostream>
#include<string>
using namespace std;

struct phone {
	string name;
	int RAM;
	int ROM;
	string processor;
	int camera;
	double price;
};

int main() {
	phone moto;

	moto.name = "SamMoto";
	moto.processor = "Snapdragon";
	moto.price = 4500;
	moto.camera = 15;
	moto.RAM = 16;
	moto.ROM = 132;

	cout << "Name: " << moto.name << endl;
	cout << "Processor: " << moto.processor << endl;
	cout << "Price: " << moto.price << endl;
	cout << "Camera: " << moto.camera << endl;
	cout << "RAM: " << moto.RAM << endl;
	cout << "ROM: " << moto.ROM << endl;

	return 0;
}
