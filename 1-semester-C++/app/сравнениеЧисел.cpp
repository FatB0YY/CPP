#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
#include <cmath>
using namespace std;

char comparison(int a, int b) {
	if (a > b) {
		return '>' ;
	}
	else {
		if (a < b) {
			return '<';
		}
		else {
			return '=';
		}
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	int b;
	cout << "Введите a = ";
	cin >> a;
	cout << "Введите b = ";
	cin >> b;

	cout << "Сравнение: ";
	char result = comparison(a, b);

	cout << result;
	return 0;
}
