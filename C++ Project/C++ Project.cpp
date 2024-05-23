//Write a program to swap two numbers
#include <iostream>

using namespace std;

int main() {
	int a = 10;
	int b = 20;
	int temp = 0;

	temp = a;

	a = b;
	b = temp;

	cout << "New value of a: " << a << endl;
	cout << "New value of b: " << b << endl;

	return 0;
}
