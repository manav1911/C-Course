//
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	//declaration
	multimap<int, string> mmap1;

	//init
	multimap<int, string> mmap2 = { {101,"Vedinesh"}, {201,"Tim"}, {201,"Faran"} };

	multimap<int, string>::iterator i = mmap2.begin();
	//check
	for (i; i != mmap2.end(); i++) {
		cout << i->first << " ";
		cout << i->second << endl;
	}
	cout << endl;

	//Altering can't happen in multimap

	//Insert
	mmap2.insert(pair<int, string>(106, "Amit"));
	mmap2.insert(make_pair(208, "Hina"));

	//check
	for (multimap<int, string>::iterator i = mmap2.begin(); i != mmap2.end(); i++) {
		cout << i->first << " ";
		cout << i->second << endl;
	}
	cout << endl;

	//erase(): remove entry in map pointed by iterator
	multimap<int, string>::iterator del = mmap2.begin();
	mmap2.erase(del);

	//check
	for (multimap<int, string>::iterator i = mmap2.begin(); i != mmap2.end(); i++) {
		cout << i->first << " ";
		cout << i->second << endl;
	}
	cout << endl;

	//Swap
	//mmap1.swap(mmap2);

	//clear: delete all the elements in multimap

	//count: return number of elements matching with given key
	cout << "Count number of 201: " << mmap2.count(201) << endl;

	//size: returns the number of elements in the multimap
	cout << "Number of elements: " << mmap2.size() << endl;

	return 0;
}
