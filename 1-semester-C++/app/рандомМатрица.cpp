#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
#include <cmath>
using namespace std;

int** CreateMattrix(int n) {
	int** m = new int* [n];

	for (int i = 0; i < n; i++)
		m[i] = new int[n];

	return m;
}

void PrintMattrix(int** m, int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cout << m[i][j];
}


int FillMattrix(int** m, int n, int min, int max) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			return m[i][j] = floor(rand() % (max - min + 1) + min);
}

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	cout << "Enter size of mattrix = ";
	int n; cin >> n;
	cout << "min = ";
	int min; cin >> min;
	cout << "max = ";
	int max; cin >> max;


	int** m1 = CreateMattrix(n);
	FillMattrix(m1, n, min, max);


	PrintMattrix(m1, n);


	delete[] m1;
	return 0;
}