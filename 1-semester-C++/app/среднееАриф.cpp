#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
#include <cmath>
using namespace std;

float arif(int* arr, int n) {

	int r = 0;
	for (int i = 0; i < n; i++) {
		r += arr[i];
	}
	float floatValue = (float)r;
	floatValue = floatValue / n;
	return floatValue;
}

int main() {
	setlocale(LC_ALL, "Russian");

	float r = 0;
	int n;
	cout << "Введите n = ";
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}



	float result = arif(arr, n);
	cout << "Среднее арифметическое число = ";
	cout << result;

	delete[] arr;
	return 0;
}