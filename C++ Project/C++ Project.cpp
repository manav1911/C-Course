#include <iostream>

using namespace std;

int main() {
	int var1 = 10;
	const int var2 = 20;

	var1 = 100;
	//var2 = 200;

	cout << var1 << endl;
	cout << var2 << endl;

	return 0;
}
