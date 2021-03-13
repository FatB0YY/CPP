#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int a = 0;
    int b = 0;
    char s1[] = "(a+b)*(-c)";


    for (int i = 0; i < sizeof(s1) - 1; i++) {
        if (s1[i] == '(') {
            a += 1;
        } 

        if (s1[i] == ')'){
            b += 1;
        }
    }

    if (a == b) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

//дз на 19:09:20