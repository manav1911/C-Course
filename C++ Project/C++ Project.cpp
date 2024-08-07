//
#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main() {
	//Declaration
	queue<int> queue1;

	//Push values
	queue1.push(10);
	queue1.push(20);
	queue1.push(30);

	//Front
	cout << "Front Element: " << queue1.front() << endl;

	//Back
	cout << "Front Element: " << queue1.back() << endl;

	//Pop
	queue1.pop();
	cout << "New front element: " << queue1.front() << endl;

	//Size: Number of elements present in the Queue
	cout << "Number of elements: " << queue1.size();

	return 0;
}
