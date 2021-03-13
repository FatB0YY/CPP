#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
#include <regex>
using namespace std;





int main() {
	setlocale(LC_CTYPE, "Russian");

	string str;
	cout << "Слова: ";
	getline(cin, str);

	int f = str.length();
	int max = 0;
	int imax = -1;
	int i = 0;

	while (str[i] != '\0') {
		while (str[i] == ' ') {
			i++;
		}
		int d = 0;
		while (str[i] != ' ' && str[i] != '\0') {
			i++;
			d++;
		}
		if (d > 0 && d > max) {
			max = d;
			imax = i - d;
		}
	}
	if (max != 0) {
		cout << "Слово = ";
		for (i = imax; i < imax + max; i++) {
			cout << str[i];
		}
		cout << endl;
		cout << "max = " << max;
	}
	else {
		cout << 'NET';
	}


	return 0;
}