#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// stack
template <typename T>
class Stack {
public:
	Stack();
	~Stack();
	void pop();
	void clear();
	void push(T data);
	void print();
	bool empty();
	int GetSize() { return Size; }
private:

	// this is our element (node)
	template <typename T>
	class Node {
	public:
		// pointer to the next element
		Node* next;
		// data our element
		T data;
		// constructor
		Node(T data = T(), Node* next = nullptr) {
			this->data = data;
			this->next = next;
		}
	};

	// this is first element (pointer to the first element)
	Node<T>* head;
	// number of elements (stack size)
	int Size;
};

template <typename T>
Stack<T>::Stack() {
	Size = 0;
	head = nullptr;
}

template <typename T>
Stack<T>::~Stack() {
	cout << "destructor called" << endl;
	clear();
}

// delete the first item in the stack
template <typename T>
void Stack<T>::pop() {
	// stores the address of the 0 element of our stack
	Node<T>* temp = head;
	// address of the next element
	head = head->next;
	delete temp;
	Size--;
}

// clear the stack
template<typename T>
void Stack<T>::clear() {
	while (Size) {
		pop();
	}
}

// add a new element to the beginning
template<typename T>
void Stack<T>::push(T data) {
	head = new Node<T>(data, head);
	Size++;
}

template<typename T>
void Stack<T>::print(){
	Node<T>* currentEl = head;
	while (currentEl != nullptr){
		cout << "el: " << currentEl->data << endl;
		currentEl = currentEl->next;
	}
}

template<typename T>
T Stack<T>::top(){
	return head->data;
}

template<typename T>
bool Stack<T>::empty() {
	if (GetSize() == 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	Stack<double> stk;


	stk.push(1);
	stk.push(1);
	stk.pop();
	stk.push(1);
	stk.push(99);
	stk.push(100.5);

	stk.print();

	cout << "size: " << stk.GetSize() << endl;
	return 0;
}




