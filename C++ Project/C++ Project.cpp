//
#include<iostream>
#include<string>
using namespace std;

int main() {
	string var = "", var1 = "", var2 = "";

	cout << "Enter a string: ";
	getline(cin, var);

	cout << "Enter the string to find: ";
	getline(cin, var1);

	cout << "Enter the string to replace: ";
	getline(cin, var2);

	while (var.find(var1) != string::npos) {
		var.replace(var.find(var1), var1.size(), var2);
	}

	cout << var;

	return 0;
}
