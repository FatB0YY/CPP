#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <stack>
#include <fstream>
using namespace std;


template<typename T>
class SmartPointer {
public:
	SmartPointer(T* ptr) {
		this->ptr = ptr;
		cout << "Constructor" << endl;
	}
	~SmartPointer() {
		delete ptr;
		cout << "Destructor" << endl;
	}
	T& operator*() {
		return *ptr;
	}

private:
	T* ptr;
};



int main() {

	SmartPointer<int> pointer = new int(5);

	*pointer = 34346;

	cout << *pointer << endl;


	return 0;
}