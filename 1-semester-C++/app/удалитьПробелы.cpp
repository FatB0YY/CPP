#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string str;
    cout << "Введите строку" << endl;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ' && str[i+1] == ' ')  {
            str.erase(i, 1);
            i--;
        }
    }

    cout << str;

    return 0;
}

//дз на 19:09:20
