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
	}

	static int stat;

	static int getStat() {
		stat++;
		return stat;
	}
};
int Alpha::stat = 0;

int main() {
	Alpha a1;

	cout << "Value using a1 obj = " << a1.getStat() << endl;
	cout << "Value using class name = " << Alpha::getStat() << endl;

	return 0;
}
