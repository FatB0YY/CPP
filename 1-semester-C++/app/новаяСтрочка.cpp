#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");


	char s1[] = "один два три";

	for (int i = 0; i < sizeof(s1) - 1; i++) {
		if (s1[i] != ' ') {
			printf("%c", s1[i]);
		}
		else {
			printf("\n");
		}
	}



	return (0);
}

// дз к 19:02:20