//
#include<iostream>
#include<string>
using namespace std;

/*
//takes nothing and returns nothing
void fun(void);

int main() {
	fun();

	return 0;
}

void fun(void) {
	cout << "Hello";
}
*/

/*
//takes something and returns nothing
void fun(int);

int main() {
	int val = 0;

	cout << "Enter a value: ";
	cin >> val;

	fun(val);

	return 0;
}

void fun(int a) {
	cout << endl << a;
}
*/

/*
//takes nothing and returns something
int fun(void);

int main() {
	int val = 0;

	val = fun();
	cout << "Value is: " << val;
	return 0;
}

int fun(void) {
	return 10;
}
*/

//takes something and returns something
int fun(int);

int main() {
	int val = 0;

	cout << "Enter a value: ";
	cin >> val;

	val = fun(val);

	cout << endl << "Value is: " << val;

	return 0;
}

int fun(int x) {
	x = x * x;
	return x;
}
