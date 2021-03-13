#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
using namespace std;

int main() {


	setlocale(LC_ALL, "Russian");


	int arr[30];
	int	brr[30];
	int i;
	int k;
	int n;


	cout << "Введите размер массива = ";
	cin >> k;


	for (i = 0; i < k; i++){
		cin >> arr[i];
	}

	cout << "На какое число сдвинуть массив ? = ";
	cin >> n;


	n = (int)fmod(n, k);

	for (i = 0; i < k; i++){
		brr[i] = arr[(int)fmod(i + n, k)];
	}


	for (i = 0; i < k; i++){
		cout << brr[i];
	}


	return 0;
}
// дз на 03:10:20