//
#include<iostream>
#include<string>
using namespace std;

int main() {
	int var1;
	float var2 = 10.5;

	var1 = static_cast<int>(var2) + 43.123 + 'C';
	cout << "\n The value 1 is: " << var1 << endl;
	cout << "\n The value 2 is: " << var2 << endl;

	return 0;
}
