#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");


	int n, pos = 0, per = 0;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];

	cout << 0 << ' ' << 0 << endl;
	for (int i = 1; i < n; i++) {
		if (arr[i - 1] > 0) pos++;
		if (arr[i - 1] < 0) per++;
		cout << pos << ' ' << per << endl;
	}

	delete[] arr;
	return 0;
}