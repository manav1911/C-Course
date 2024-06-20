//
#include<iostream>
#include<string>
using namespace std;

void add(int, int);
void add(float, float);

int main() {
	add(10, 20);
	add(10.7f, 10.3f);

	return 0;
}

void add(int x, int y) {
	cout << "The sum of the two integer digits is: " << x + y << endl;
}

void add(float x, float y) {
	cout << "The sum of the two float digits is: " << x + y;
}