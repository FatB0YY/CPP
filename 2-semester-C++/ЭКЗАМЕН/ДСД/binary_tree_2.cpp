#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// B <- A -> C
//Обход дерева сверху вниз(в прямом порядке) : A, B, C — префиксная форма.
//Обход дерева в симметричном порядке(слева направо) : B, A, C — инфиксная форма.
//Обход дерева в обратном порядке(снизу вверх) : B, C, A — постфиксная форма.

struct Tree {
	int data;           
	struct Tree* left;
	struct Tree* right;
};

// Обход дерева в инфиксной форме будет иметь вид
void treePrint(Tree* tree) {
	if (tree != nullptr) { //Пока не встретится пустой узел
		treePrint(tree->left); //Рекурсивная функция для левого поддерева
		cout << tree->data; //Отображаем корень дерева
		treePrint(tree->right); //Рекурсивная функция для правого поддерева
	}
}

// Обход дерева в постфиксной форме будет иметь вид
void treePrint(Tree* tree) {
	if (tree != nullptr) { //Пока не встретится пустой узел
		treePrint(tree->left); //Рекурсивная функция для левого поддерева
		treePrint(tree->right); //Рекурсивная функция для правого поддерева
		cout << tree->data; //Отображаем корень дерева
	}
}


// функция добавления узла в дерево
struct Tree* addNode(int x, Tree* tree) {
	if (tree == nullptr) { // Если дерева нет, то формируем корень
		tree = new Tree; // память под узел
		tree->data = x;   // поле данных
		tree->left = nullptr;
		tree->right = nullptr; // ветви инициализируем пустотой
	}
	else  if (x < tree->data)   // условие добавление левого потомка
		tree->left = addNode(x, tree->left);
	else    // условие добавление правого потомка
		tree->right = addNode(x, tree->right);
	return(tree);
}

// Удаление поддерева
void delSub(Tree*tree) {
	if (tree != nullptr) {
		delSub(tree->left);
		delSub(tree->right);
		delete tree;
	}
}


int main() {
	setlocale(LC_ALL, "Russian");

	
	return 0;
}