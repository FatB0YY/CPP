#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include <regex>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");

    string str;
    cout << "Слова: ";
    getline(cin, str);

    int f = str.length();

    for (int i = 0; i < f / 2; i++)
    {
        if (str[i] != str[f - i - 1])
        {
            cout << "false";
            break;
        }
        else
        {
            cout << "true";
            break;
        }
    }

    getch();
    return 0;
}