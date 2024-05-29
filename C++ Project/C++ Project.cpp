//Example of Precedence & Associativity
#include <iostream>

using namespace std;

void main() {
	int a = 10;
	int b = 20;
	int c = 30;
	float total;

	total = b++ - c-- + a;
	cout << total;
}
