#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//Singly linked list
template <typename T>
class SingleList {
public:
	SingleList();
	~SingleList();

	void pop_front();
	void push_back(T data);
	void clear();
	void push_front(T data);
	void insert(T value, int index);
	void removeAt(int index);
	void pop_back();

	T& SummaList();
	int GetSize() { return Size; }

	// iterating through a list (index)
	T& operator[](const int index);
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
	// number of elements (list size)
	int Size;
};

template <typename T>
SingleList<T>::SingleList() {
	Size = 0;
	head = nullptr;
}

template <typename T>
SingleList<T>::~SingleList() {
	cout << "destructor called" << endl;
	clear();
}

// delete the first item in the list
template <typename T>
void SingleList<T>::pop_front() {
	// stores the address of the 0 element of our list
	Node<T>* temp = head;
	// address of the next element
	head = head->next;
	delete temp;
	Size--;
}

// creating a new elementand adding it to the end
template <typename T>
void SingleList<T>::push_back(T data) {
	if (head == nullptr) {
		head = new Node<T>(data);
	}
	else {
		// carrent = last element
		Node<T>* current = this->head;
		while (current->next != nullptr) {
			current = current->next;
		}
		current->next = new Node<T>(data);
	}
	Size++;
}

// clear the list
template<typename T>
void SingleList<T>::clear() {
	while (Size) {
		pop_front();
	}
}

// add a new element to the beginning
template<typename T>
void SingleList<T>::push_front(T data) {
	head = new Node<T>(data, head);
	Size++;

}

template<typename T>
void SingleList<T>::insert(T value, int index) {
	if (index == 0) {
		push_front(value);
	}
	else {
		Node<T>* previous = this->head;
		for (int i = 0; i < index - 1; i++) {
			// previous is the prev node on our list (index - 1)
			previous = previous->next;
		}
		Node<T>* newNode = new Node<T>(value, previous->next);
		previous->next = newNode;
		Size++;
	}
}

template<typename T>
void SingleList<T>::removeAt(int index) {
	if (index == 0) {
		pop_front();
	}
	else {
		Node<T>* previous = this->head;
		for (int i = 0; i < index - 1; i++) {
			// previous is the prev node on our list (index - 1)
			previous = previous->next;
		}
		Node<T>* toDelete = previous->next;
		previous->next = toDelete->next;
		delete toDelete;
		Size--;
	}
}

// delete the last item
template<typename T>
void SingleList<T>::pop_back() {
	removeAt(Size - 1);
}



// summa
template<typename T>
T& SingleList<T>::SummaList(){
	T sum = 0;
	Node<T>* current = this->head;
	while(current != nullptr){
		sum += current->data;
		current = current->next;
	}
	return sum;
}

template <typename T>
T& SingleList<T>::operator[](const int index) {
	int counter = 0;
	Node<T>* current = this->head;
	while (current != nullptr) {
		if (counter == index) {
			return current->data;
		}
		current = current->next;
		counter++;
	}
}


int main() {
	setlocale(LC_ALL, "Russian");

	SingleList<double> lst;
	lst.push_back(22.1);
	lst.push_back(10.7);
	lst.push_back(11.2);
	lst.pop_front();
	lst.push_front(1);
	lst.push_front(1);
	lst.push_front(1);
	lst.push_front(99);
	lst.push_front(100.5);
	lst.insert(33, 1);
	lst.insert(55, 2);
	lst.removeAt(0);
	lst.pop_back();
	cout << "[]: " << lst[1] << endl;
	cout << "size: " << lst.GetSize() << endl;
	cout << "sum = " << lst.SummaList() << endl;
	for (int i = 0; i < lst.GetSize(); i++) {
		cout << "lst[" << i << "] = " << lst[i] << endl;
	}
	return 0;
}




