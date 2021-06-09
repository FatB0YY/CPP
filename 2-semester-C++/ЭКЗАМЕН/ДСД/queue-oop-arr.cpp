#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Queue {
    static const int SIZE = 1000;
    int* queue;
    int frnt, rear;
public:
    Queue();
    ~Queue();
    void push(int num);
    void print();
    int size();
    void pop();
    int front();
    int back();
};

Queue::Queue() {
    queue = new int[SIZE];
    frnt = rear = 0;
}

Queue::~Queue(){
    delete queue;
}

// print
void Queue::print() {
    for (int i = frnt + 1; i < rear + 1; i++)
        cout << " " << queue[i];
}

// adding an item to the queue
void Queue::push(int num) {
    if (rear + 1 == frnt || (rear + 1 == SIZE && !frnt)) {
        cout << "the queue is full" << endl;
        return;
    }
    rear++;
    if (rear == SIZE) rear = 0;
    queue[rear] = num;
}

// Retrieving an item from the queue
void Queue::pop() {
    if (frnt == rear) {
        cout << "the queue is empty" << endl;
        return;
    }
    frnt++;
    if (frnt == SIZE) frnt = 0;
}

// size
int Queue::size() {
    int s = 0;
    for (int i = frnt; i < rear; i++)
        s++;
    return s;
}

// Last item in the queue
int Queue::back() {
    return queue[rear];
}

// The first element of the queue
int Queue::front() {
    return queue[frnt + 1];
}

int main() {
    Queue queue1;
    int i;
    int n;
    cout << "n = ";
    cin >> n;
    for (i = 0; i < n; i++) {
        int a;
        cout << "a = ";
        cin >> a;
        queue1.push(a);
    }


    cout << "Initial queue ";
    queue1.print();
    cout << endl;
    cout << "enter another element: ";
    cin >> i;
    queue1.push(i);
    cout << "now the queue looks like this: ";
    queue1.print();
    cout << endl << "Queue size: ";
    cout << queue1.size();
    cout << endl << "last element :";
    cout << queue1.back();
    cout << endl << "the first element: ";
    cout << queue1.front();
    cout << endl << "deleting an item";
    queue1.pop();
    cout << endl << "current data";
    queue1.print();
    cout << endl << "another addition of the element";
    queue1.push(7);
    queue1.print();
    return 0;
}