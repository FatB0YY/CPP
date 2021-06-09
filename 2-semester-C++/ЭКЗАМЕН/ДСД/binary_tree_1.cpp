#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// binary tree node structure
struct Tree {
	int info; // data
	Tree* left; // pointer to the left subtree
	Tree* right; // pointer to the right subtree
};

// определение рекурсивной функции 
// добавления в дерево нового элемента
void AddTreeRecursion(Tree*& root, int key) {
	// если дерево пусто, формируем корень дерева
	if (root == nullptr) {
		Tree* help = new Tree;
		help->info = key;
		help->left = nullptr;
		help->right = nullptr;
		root = help;
		return;
	}
	else {
		// определяем, в левое или в правое поддерево узла root
		// добавляется новый элемент 
		if (root->info > key)
			// рекурсивный вызов функции 
			// добавления в левое поддерево
			AddTreeRecursion(root->left, key);
		else
			// рекурсивный вызов функции 
			// добавления в правое поддерево
			AddTreeRecursion(root->right, key);
	}


}

// определение нерекурсивной функции добавления 
// в дерево нового элемента
void AddTreeNotRecursion(Tree*& root, int key) {
	Tree* help, * newNode;
	// если дерево пусто, формируем корень дерева
	if (root == nullptr) {
		root = new Tree;
		root->info = key;
		root->left = nullptr;
		root->right = nullptr;
		return;

	}
	help = root;
	// двигаемся по узлам дерева, начиная с корня, 
	// пока не найдем место вставки нового элемента
	while (true) {
		if (help->info > key)
			// в текущем узле help значение больше нового
			if (help->left == nullptr) {
				// если у узла help нет левого 
				// поддерева, новый узел 
				// «подцепляется» к узлу help слева
				newNode = new Tree
					; newNode->info = key;
				newNode->left = nullptr;
				newNode->right = nullptr;
				help->left = newNode;
				return;
			}
			else
				// если существует левое поддерево,
				// перемещаемся к левому потомку help
				help = help->left; else
				// в текущем узле help значение
				// меньше или равно новому
				if (help->right == nullptr) {
					// если у узла help нет правого 
					// поддерева, новый узел
					// «подцепляется» к help справа
					newNode = new Tree;
					newNode->info = key;
					newNode->left = nullptr;
					newNode->right = nullptr;
					help->right = newNode;
					return;
				}
				else
					// если существует правое поддерево,
					// перемещаемся к правому потомку help
					help = help->right;
	}
}

// определение функции создания дерева на основе 
// данных текстового файла
int CreateTree(char* FileName, Tree*& root) {
	int k;
	// открытие файла
	FILE* f = fopen(FileName, "r");
	if (f == nullptr) {
		//Ошибка открытия файла
		return -1;
	}
	// изначально дерево пусто
	root = nullptr;
	// в цикле считываем числа из файла в переменную k
	while (fscanf(f, "%d", &k) > 0)
		// добавляем элемент со значением k в дерево
		AddTreeNotRecursion(root, k);
	fclose(f);
	return 1;
}

// определение рекурсивной функции распечатки
// значений из узлов дерева в порядке неубывания
void PrintTreeRecursion(Tree* root) {
	if (root != nullptr) {
		// печатаем значения из левого поддерева узла root
		PrintTreeRecursion(root->left);
		// печатаем информационное поле узла root
		printf("%d ", root->info);
		// печатаем значения из правого 
		// поддерева узла root
		PrintTreeRecursion(root->right);
	}
}

// удаление первого найднего эл
void remove(Tree*& root, int info){ 
	if (root == nullptr) return;
	if (root->info == info){
		Tree* help = root;
		if (root->left == nullptr){
			root = root->right; 
			delete help;
		}
		else
			if (root->right == nullptr){
				root = root->left; delete help;
			}
			else{
				Tree* u = root->right;
				if (u->left == nullptr){
					u->left = root->left;
					root = u;
					delete help;
				}
				else{
					Tree* w = u, * v = u->left;
					while (v->left != nullptr){
						w = w->left;
						v = v->left;
					}
					help = v;
					root->info = v->info;
					w->left = v->right;
					delete help;
				}
			}
	}
	else
		if (root->info > info)
			remove(root->left, info);
		else
			remove(root->right, info);
}

// минимальное значение
int MinValue(Tree*& root) {
	if (root->left != nullptr) {
		return MinValue(root->left);
	}
	else {
		return root->info;
	}
}

// уничтожение дерева
void deleteTree(Tree* root) {
	if (root != nullptr) {
		if (root->left != nullptr) {
			deleteTree(root->left);
		}
		if (root->right != nullptr) {
			deleteTree(root->right);
		}
		delete root;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	Tree* tr = new Tree;
	tr = nullptr;
	AddTreeRecursion(tr, 2);
	AddTreeRecursion(tr, 3);
	AddTreeNotRecursion(tr, 4);
	AddTreeNotRecursion(tr, 5);
	AddTreeNotRecursion(tr, 2);
	PrintTreeRecursion(tr);
	cout << endl;
	remove(tr, MinValue(tr));
	PrintTreeRecursion(tr);
	deleteTree(tr);
	return 0;
}