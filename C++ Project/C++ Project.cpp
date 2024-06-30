//
#include<iostream>
#include<string>
using namespace std;

class house {

	//Access specifier - Can not be called and edited outside the class
private:

	//member variables
	int lenght = 0, breadth =0;

	//Access Specifier - Can be called and edited outside the class
public:
	//member functions
	void setData(int x, int y) {
		lenght = x;
		breadth = y;
	}

	void area() {
		cout << "The area of the house is: " << lenght * breadth;
	}
};

int main() {
	house h1;

	h1.setData(300, 500);
	h1.area();

	return 0;
}
