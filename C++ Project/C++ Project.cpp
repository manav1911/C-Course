//
#include<iostream>
#include<string>
using namespace std;

class Person {
private:
	int weight;

public:
	Person(int w = 0) {
		weight = w;
	}

	friend bool operator>(Person x, Person y);
	friend bool operator<(Person x, Person y);
	friend bool operator==(Person x, Person y);
};

bool operator<(Person x, Person y) {
	return x.weight < y.weight;
}

bool operator>(Person x, Person y) {
	return x.weight > y.weight;
}

bool operator==(Person x, Person y) {
	return x.weight == y.weight;
}

int main() {
	int w1, w2;
	
	cout << "Enter Jon's weight: " << endl;
	cin >> w1;
	cout << "Enter Rick's weight: " << endl;
	cin >> w2;

	Person jon(w1);
	Person rick(w2);

	if (jon > rick) {
		cout << "Jon is heavier" << endl;
	}
	else if (jon < rick) {
		cout << "Rick is heavier" << endl;
	}
	else {
		cout << "Jon is equally heavy as Rick" << endl;
	}

	return 0;
}
