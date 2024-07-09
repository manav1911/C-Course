//
#include<iostream>
#include<string>
using namespace std;

void Square(int* ptr);

int main() {
	int number = 10;
	cout << "Before: " << number << endl;

	Square(&number);
	cout << "After: " << number << endl;

	return 0;
}

void Square(int *ptr) {
	int temp = *ptr;
	temp = temp * temp;

	*ptr = temp;
}
