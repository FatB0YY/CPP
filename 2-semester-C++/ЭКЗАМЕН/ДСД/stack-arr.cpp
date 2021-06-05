#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

#define NMAX 1000
struct stack {
	double elem[NMAX];
	int top;
};

// Stack Initialization
void init(struct stack* stk) {
	stk->top = 0;
}

// adding an item to the stack
void push(struct stack* stk, double f) {
	if (stk->top < NMAX) {
		stk->elem[stk->top] = f;
		stk->top++;
	}
	else {
		cout << "Stack is full, number of elements: " << stk->top << endl;
	}
}

// Removing an item from the stack
float pop(struct stack* stk) {
	float elem;
	if ((stk->top) > 0) {
		stk->top--;
		elem = stk->elem[stk->top];
		return elem;
	}
	else {
		cout << "The stack is empty" << endl;
		return 0;
	}
}

// Getting the top element of the stack without deleting it
float stkTop(struct stack* stk) {
	if ((stk->top) > 0) {
		return stk->elem[stk->top - 1];
	}
	else {
		cout << "The stack is empty" << endl;
		return 0;
	}
}

// Getting the number of stack elements
int getcount(struct stack* stk) {
	return stk->top;
}


// empty?
int isempty(struct stack* stk) {
	if (stk->top == 0)    return 1;
	else return 0;
}

// print
void stkPrint(struct stack *stk) {
	int i;
	i = stk->top; // i - number of elements in the stack
	if (isempty(stk) == 1) return; // the stack is empty

	do {
		i--;
		cout << stk->elem[i] << endl;
	} while (i > 0);
}


int main() {
	setlocale(LC_ALL, "Russian");

	
	struct stack* stk;
	int i;
	int n;
	double elem;

	/*stk = (struct stack*)malloc(sizeof(struct stack));*/
	stk = new stack{};

	init(stk);
	cout << "Enter the number of items in the stack: ";
	cin >> n;
	for (i = 0; i < n; i++) {
		cout << "Enter an item " << i << " : ";
		cin >> elem;
		push(stk, elem);
	}
	cout << "In the elements stack: " << getcount(stk) << endl;
	stkPrint(stk);
	cout << "Top element: " << stkTop(stk) << endl;

	// clearing the stack
	do {
		cout << "Extracting the element " << pop(stk) << endl;
		cout << "In the elements stack: " << getcount(stk) << endl;
	} while (isempty(stk) == 0);

	delete stk;
	return 0;
}