//
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int weight;

public:
	void setWeight(int w) {
		weight = w;
	}
	int getWeight() {
		return weight;
	}
};

class BMW {
private:
	int topSpeed;
	Car* ptr;

public:
	BMW(int wght = 0, int tSpeed = 0) {
		ptr = new Car;
		ptr->setWeight(wght);

		topSpeed = tSpeed;
	}

	int getWeight() {
		return ptr->getWeight();
	}

	int getTopSpeed() {
		return topSpeed;
	}

	~BMW() {
		delete ptr;
	}
};

int main() {

	BMW b(3000, 350);

	cout << "The weight of the car is: " << b.getWeight() << endl;
	cout << "The top speed of the car is: " << b.getTopSpeed() << endl;

	return 0;
}
