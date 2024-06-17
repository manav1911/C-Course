//
#include<iostream>
#include<string>
using namespace std;

int main() {
	string var = "";
	char temp;

	cout << "Enter a string: ";
	cin >> var;

	temp =var[0];

	for (int i = 1; i <= var.size(); i++) {
		if (var[i] == temp) {
			var[i] = '&';
		}
	}

	cout << var;
	return 0;
}
