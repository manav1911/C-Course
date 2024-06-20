//
#include<iostream>
#include<string>
using namespace std;

void multiply(int, int);

int main() {

	multiply(10000, 20000);

	return 0;
}

inline void multiply(int x, int y) {
	cout << "The multiplication of the two integer digits is: " << x * y << endl;
}