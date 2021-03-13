#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
#include <cmath>
using namespace std;

int* inputArr(int n) {
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	return arr;

}

void outputArr(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}


int main() {
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "Введите n = ";
	cin >> n;

	int* F = inputArr(n);
	cout << "Массив = ";
	outputArr(F, n);

	delete[] F;
	return 0;
}
