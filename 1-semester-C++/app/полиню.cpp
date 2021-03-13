#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
#include <regex>
using namespace std;

bool pol(string str) {
	int f = str.length();

	for (int i = 0; i < f / 2; i++) {
		if (str[i] != str[f - i - 1])
		{
			return false;
		}
		else {
			return true;
		}
	}
}



int main() {
	setlocale(LC_CTYPE, "Russian");

	string str;
	cout << "Слова: ";
	getline(cin, str);

	if (pol(str)) {
		cout << "true";
	}
	else {
		cout << "false";
	}


	return 0;
}
