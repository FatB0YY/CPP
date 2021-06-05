#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	// first in — last out
	stack <double> stk1;
	for (int i = 0; i < 6; i++){
		double a;
		cout << "a = ";
		cin >> a;
		stk1.push(a);
	}
	if (stk1.empty()) cout << "The stack is not empty";
	cout << "The top element of the stack: " << stk1.top() << endl;
	stk1.pop();  // deleting the top element
	/*cout << "The third element of the stack: " << stk1.peek(3);*/


	// last in — last out
	queue <int> que;  // создали очередь q
	for (int i = 0; i < 6; i++) {
		double a;
		cout << "a = ";
		cin >> a;
		que.push(a);
	}
	cout << endl;
	cout << "The top element of the queue: " << que.front() << endl;  															 
	que.pop();  // deleting the top element
	cout << "New first item (after deletion): " << que.front() << endl;
	if (!que.empty()) cout << "The queue is not empty!";  // check if the queue is empty(no)

	return 0;
}




