//
#include<iostream>
#include<string>
using namespace std;

class Alpha {
private:
	int a;
	int b;

public:
	Alpha() {
		a = 5;
		b - 5;
		stat++;
	}

	static int stat;
};
int Alpha::stat;

int main() {
	Alpha a1;
	Alpha a2;
	Alpha a3;

	cout << "Value using a1 obj = " << a1.stat << endl;
	cout << "Value using a2 obj = " << a2.stat << endl;
	cout << "Value using class name = " << Alpha::stat << endl;

	return 0;
}
