//
#include<iostream>
#include<string>
using namespace std;

class Rectangle {
public:
	int length;
	int width;
	/*int area = length * width;*/

	void totalArea() {
		cout << "The area of the rectangle is: " << length * width << endl;
	}
};

class Cuboid :public Rectangle {
public:
	int height;
	/*int volume = length * width * height;*/

	void totalVolume() {
		cout << "The volume of the coboid is: " << length * width * height << endl;
	}
};

int main() {
	Cuboid c;

	c.length = 10;
	c.width = 20;
	c.height = 30;

	c.totalArea();
	c.totalVolume();

	return 0;
}
