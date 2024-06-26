//Factorial
#include<iostream>
#include<string>
using namespace std;

int recursion(int);


int main() {
	int num = 0;
	int result = 0;

	cout << "Enter a number: ";
	cin >> num;

	result = recursion(num);

	cout << result;

	return 0;
}

int recursion(int num) {
	if (num > 0) {
		return(num * recursion(num - 1));
	}
}