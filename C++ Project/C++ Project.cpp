//
#include<iostream>
#include<string>
using namespace std;

void add(int, int);
void add(int, int, int);
//void add(string, string);

int main() {
	add(10, 20);
	add(1, 2, 3);
	//add("Manav", "Patel");

	return 0;
}

void add(int x, int y) {
	cout << "The sum of the two integer digits is: " << x + y << endl;
}

void add(int x, int y, int z) {
	cout << "The sum of the two integer digits is: " << x + y + z << endl;
}

/*void add(string x, string y) {
	cout << "The string you added is: " << x + " " + y;
}*/