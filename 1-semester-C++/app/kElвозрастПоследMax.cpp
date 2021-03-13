#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	int i;
	cout << "Введите n = ";
	cin >> n;

	int* arr = new int[n];

	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int k = 0;
	int max = 0;
	int imax = -1;

	for (i = 0; i < n - 1; i++) {
		if (arr[i] < arr[i + 1]) {
			k++;
			if (k > max) {
				max = k;
			}
		}
		else {
			k = 0;
		}

	}

	if (k > 0) {
		max = max + 1;
		cout << max;
	}
	else {
		cout << max;
	}

	delete[] arr;
	return 0;
}