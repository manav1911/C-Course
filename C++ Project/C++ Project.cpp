//
#include<iostream>
#include<string>
using namespace std;

int main() {
	string var1 = "", var2 = "";

	cout << "Enter the first string: ";
	getline(cin, var1);

	cout << "Enter the first string: ";
	getline(cin, var2);

	if (var2.size() == var1.size()) {
		cout << "The string length is equal.";
	}
	else {
		cout << "The string length is not equal.";
	}
	
	return 0;
}
