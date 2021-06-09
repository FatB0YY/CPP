#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>
using namespace std;

template <typename T>
void PrintList(const list<T>& lst) {
	for (auto i = lst.cbegin(); i != lst.cend(); ++i) {
		cout << *i << " ";
	}
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");

	list<int> myList = {10, 11};
	myList.push_back(1);
	myList.push_front(2);
	myList.push_front(3);

	// begin() the first element 
	// list<int>::iterator = auto
	auto it = myList.begin();
	// 3
	cout << *it << endl;

	// 3 2 10 11 1
	PrintList(myList);

	// from naim to naib
	myList.sort();
	myList.pop_back();
	myList.pop_front();
	//  2 3 10 
	PrintList(myList);
	cout << "size = " << myList.size() << endl;
	myList.reverse();


	auto it2 = myList.begin();
	++it;
	// 10 111 3 2
	myList.insert(it2, 111);
	// dostyp po proizvolnome iteratory
	advance(it2, 3);
	// delete po iteratory
	myList.erase(it2);

	list<int> myList2 = { 12,4,54,2 };
	// copying from 2 list to 1 list
	myList.assign(myList2.begin(), myList2.end());
	PrintList(myList);


	myList.clear();
	
	return 0;
}