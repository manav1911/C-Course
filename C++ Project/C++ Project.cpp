//
#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main() {
	//Create a (max heap)
	//priority_queue <int> queue1;

	//Create a (min heap)
	priority_queue <int, vector<int>, greater<int>> queue1;

	//Push value
	queue1.push(20);
	queue1.push(40);
	queue1.push(30);

	//Top
	cout << "Top Element: " << queue1.top() << endl;

	//Pop
	queue1.pop();
	cout << "New Top Element: " << queue1.top() << endl;

	//Size
	cout << "Number of Elements: " << queue1.size() << endl;

	//Swap: Swaps the element of the 2 priority queues
	//pq1.swap(pq2);

	return 0;
}
