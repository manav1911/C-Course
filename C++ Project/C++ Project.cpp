//Sum of numbers
#include<iostream>
#include<string>
using namespace std;

int sum(int);

int main() {
	int num = 0;
	int result = 0;

	cout << "Enter a number: ";
	cin >> num;

	result = sum(num);
	cout << endl << result;

	return 0;
}

int sum(int num) {
	if (num > 0) {
		cout << endl << num;
		return (num + sum(num - 1));
	}
	else {
		return 0;
	}
}
