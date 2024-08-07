//
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	//Declaration
	vector<int> testVector1;
	cout << "Size: " << testVector1.size() << endl;

	//Initialization
	vector<int> testVector2 = { 10,20,30 };

	//Methods
	cout << "At: " << testVector2.at(2) << endl;
	cout << "[]: " << testVector2[2] << endl;

	//Inserting an element of the vector
	testVector2.push_back(40);
	testVector2.push_back(50);
	testVector2.push_back(60);

	//Iterator is pointer to container - Usually used to check the new elements added
	for (vector<int>::iterator i = testVector2.begin(); i != testVector2.end(); i++) {
		cout << *i << " "; //For printing the vector
	}
	cout << endl;

	//Pop Out Last Element
	testVector2.pop_back();

	//Iterator is pointer to container - Usually used to check the popped elements added
	for (vector<int>::iterator i = testVector2.begin(); i != testVector2.end(); i++) {
		cout << *i << " "; //For printing the vector
	}
	cout << endl;


	//Insert:- Inserts the element in vector before the position pointed
	//By iterator
	vector<int>::iterator i = testVector2.begin();
	testVector2.insert(i, 0);  // will insert 0 before the number 10

	//erase:- removes the element pointed by the iterator.
	//vector<int>::iterator i = testVector2.begin();
	//testVector2.erase(i);

	//erase all element except last element
	testVector2.erase(testVector2.begin(), testVector2.end() - 1);

	//swap: interchanges value of two vectors
	testVector2.swap(testVector1);

	//capacity :number of elements that can be inserted 
	//in the vector based on the memory allocated to the vector
	cout << endl << "Capacity " << testVector2.capacity() << endl;



	return 0;
}
