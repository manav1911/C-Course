//
#include<iostream>
#include<string>
using namespace std;

int main() {
	string var1 = "";

	cout << "Enter a string: ";
	getline(cin, var1);

	cout << endl;
	//Logic
	for (int i = var1.size(); i >= 0; i--) {
		cout << var1[i];
	}


	return 0;
}
