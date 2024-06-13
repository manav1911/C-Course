#include<iostream>
#include<string>
using namespace std;

int main() {
	string var1 = "", var2 = "";
	string temp = "";

	cout << "Enter a string: ";
	getline(cin, var1);

	cout << "Enter another string: ";
	getline(cin, var2);

	/* //First Method
	temp = var2;
	var2 = var1;
	var1 = temp;
	*/

	//Second Method
	var1.swap(var2);

	cout << "After the swap string 1 is: " << var1 << " and string 2 is: " << var2 << endl;

	return 0;
}
