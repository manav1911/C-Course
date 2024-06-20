//
#include<iostream>
#include<string>
using namespace std;

void check(int);

int main() {
	int num = 0;

	cout << "Enter an integer: ";
	cin >> num;
	
	check(num);

	return 0;
}

void check (int x) {
	if (x % 2 == 0) {
		cout << "The value is even.";
	}
	else {
		cout << "The value is odd";
	}
}
