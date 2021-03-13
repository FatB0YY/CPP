#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");

    string str;
    cout << "Слова: ";
    getline(cin, str);

    int i = 0;
    int k = 0;
    while (str[i] != '\0')
    {
        while (str[i] == ' ')
        {
            i++;
        }
        int f = 0;
        while (str[i] != ' ' && str[i] != '\0')
        {
            f++;
            i++;
        }
        if (f > 0)
        {
            k++;
        }
    }
    cout << k;

    getch();
    return 0;
}