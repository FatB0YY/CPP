#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	vector<int> myVector;
	myVector.push_back(4);
	myVector.push_back(2);
	myVector[0] = 5;
	for (int i = 0; i < myVector.size(); i++){
		cout << myVector[i] << " ";
	}
	cout << endl;
	cout << "size = " << myVector.size() << endl;
	// bydet obrabotano isklychenie,
	// but method at() is very slow, because every time there is a check
	try{
		cout << myVector.at(2) << endl;
	}
	catch (const std::out_of_range& error){
		cout << error.what() << endl << endl;
	}
	// deleting one element
	myVector.pop_back();
	myVector.clear();
	cout << "size = " << myVector.size() << endl;
	
	vector<int> myVector2 = {34, 57, 23, 55};
	cout << "size = " << myVector2.size() << endl;
	// how many empty yacheek to create for capacity
	myVector2.reserve(100);
	// size together with dopolnitelnumi yacheykami
	cout << "capacity = " << myVector2.capacity() << endl;

	// vudelim memory for a new small array,
	// perepisali all the elements, deleted the old array
	myVector2.shrink_to_fit();
	cout << "shrink_to_fit()" << endl;
	cout << "size = " << myVector2.size() << endl;
	cout << "capacity = " << myVector2.capacity() << endl;

	// 15 cells with the value 1
	vector<int> myVector3(15, 1);
	cout << "size = " << myVector3.size() << endl;
	for (int i = 0; i < myVector3.size(); i++) {
		cout << myVector3[i] << " ";
	}
	cout << endl;
	// is it empty ?
	cout << myVector3.empty() << endl;

	vector<int> myVector4 = { 34,5667,3,45,6,7,77 };
	vector<int>::iterator it;
	it = myVector4.begin();
	*it = 1000;
	it+=2;
	// 3
	cout << *it << endl;
	for (vector<int>::iterator i = myVector4.begin(); i != myVector4.end(); i++) {
		cout << *i << endl;
	}

	// from the end
	for (vector<int>::reverse_iterator i = myVector4.rbegin(); i != myVector4.rend(); i++) {
		cout << *i << endl;
	}

	// const
	for (vector<int>::const_iterator i = myVector4.cbegin(); i != myVector4.cend(); i++) {
		// *i = 5; error
	}

	// sdvigaet the iterator na ykazannoe kol el
	vector<int>::iterator it2 = myVector4.begin();
	cout << *(it2 + 1) << endl;
	// if it doesn't support it, then:
	advance(it2, 1);

	// posvolyaet to add an el by index
	// using iterators
	myVector4.insert(it, 999);
	// deletes an element
	myVector4.erase(it2);
	return 0;
}