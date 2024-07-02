//
#include<iostream>
#include<string>
using namespace std;

class Person {
private:
	int weight;

public:
	Person(int x = 0) {
		weight = x;
	}

	void getData() {
		cout << "Weight is: " << weight << endl;
	}

	void operator++() {
		++weight;
	}

	void operator++(int) {
		weight++;
	}
};

int main() {
	Person Jon(78);
	++Jon;

	Jon++;

	Jon.getData();

	return 0;
}
