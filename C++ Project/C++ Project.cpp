//
#include<iostream>
#include<string>
using namespace std;

int main() {
	int number = 10;
	int* ptr = NULL;

	ptr = &number;
	cout << "ptr: " << ptr << endl;
	cout << "Value in ptr: " << *ptr << endl;

	return 0;
}
