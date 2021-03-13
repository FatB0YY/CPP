#include <iostream>
#include <cmath>
using namespace std;

int** CreateMattrix(int n) {
	int **m = new int *[n];

	for (int i = 0; i < n; i++)
		m[i] = new int[n];

	return m;
}

void FillMattrix(int** m, int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> m[i][j];
}

void PrintMattrix(int** m, int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cout << m[i][j];
}

int SumD(int n, int** m1, int** m2) {
	int sum = 0;
	int sum2 = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i == j) {
				sum += m1[i][j];
				sum2 += m2[i][j];
			}
	return sum + sum2;
}



int main() {
	setlocale(LC_CTYPE, "Russian");

	int n;
	cout << "Размер матрицы введите n = "; cin >> n; // размер матрицы 

	int** m1 = CreateMattrix(n); // создание 1 матрицы
	FillMattrix(m1, n); // заполнение 1 матрицы

	int** m2 = CreateMattrix(n); // создание 2 матрицы
	FillMattrix(m2, n); // заполнение 2 матрицы

	PrintMattrix(m1, n); // вывод 1 матрицы
	cout << " ";
	PrintMattrix(m2, n); // вывод 2 матрицы
	cout << " ";
	cout <<"Сумма = " <<  SumD(n, m1, m2);
	
	return 0;
}