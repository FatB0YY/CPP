#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

#define QMAX 1000
struct queue {
	int qu[QMAX];
	int rear, frnt;
};

// Initializing the queue
void init(struct queue* q) {
	q->frnt = 1;
	q->rear = 0;
}

// Adding an item to the queue
void insert(struct queue* q, int x) {
	if (q->rear < QMAX - 1) {
		q->rear++;
		q->qu[q->rear] = x;
	}
	else {
		cout << "The queue is full!" << endl;
	}
}


// Checking if the queue is empty
int isempty(struct queue* q) {
	if (q->rear < q->frnt) return 1;
	else  return 0;
}


// print
void print(struct queue* q) {
	int h;
	if (isempty(q) == 1) {
		cout << "The queue is empty!" << endl;
		return;
	}
	for (h = q->frnt; h <= q->rear; h++)
		cout << q->qu[h] << endl;
}


// Removing an item from the queue
int remove(struct queue* q) {
	int x, h;
	if (isempty(q) == 1) {
		cout << "The queue is empty!" << endl;
		return 0;
	}
	x = q->qu[q->frnt];
	for (h = q->frnt; h < q->rear; h++) {
		q->qu[h] = q->qu[h + 1];
	}
	q->rear--;
	return x;
}


int main() {
	setlocale(LC_ALL, "Russian");

	struct queue* q;
	int a;
	int n;
	cout << "number of elements: ";
	cin >> n;
	q = new queue;
	init(q);
	for (int i = 0; i < n; i++) {
		cout << "Enter the queue item: ";
		cin >> a;
		insert(q, a);
	}

	print(q);

	// clearing the queue
	while (q->frnt <= q->rear) {
		a = remove(q);
		cout << "Item deleted: " << a << endl;
	}

	delete q;
	return 0;
}