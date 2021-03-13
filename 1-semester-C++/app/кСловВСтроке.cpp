#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
#include <regex>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");


	char str[100];
	cin.getline(str, 100);



	int i = 0;
	int k = 0;
	while (str[i] != '\0') {
		while (str[i] == ' ') {
			i++;
		}
		int f = 0;
		while (str[i] != ' ' && str[i] != '\0')
		{
			f++;
			i++;
		}
		if (f > 0) {
			k++;
		}
	}
	cout << k;
	return 0;
}
