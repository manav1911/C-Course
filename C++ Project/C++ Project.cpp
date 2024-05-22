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

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}
