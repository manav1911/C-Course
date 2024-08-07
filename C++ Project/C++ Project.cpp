//
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	//Declaration
	stack<int> stack1;

	//Push Value
	stack1.push(10);
	stack1.push(20);
	stack1.push(30);

	//Top
	cout << "Top element: " << stack1.top() <<endl;

	//Pop
	stack1.pop();
	cout << "New Top: " << stack1.top() << endl;

	//Size: Total number of elements present in stack
	cout << "Number of element: " << stack1.size();

	return 0;
}
