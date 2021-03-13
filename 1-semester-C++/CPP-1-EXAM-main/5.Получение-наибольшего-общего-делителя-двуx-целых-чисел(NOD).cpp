#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cmath>
#include <regex>
#include <sstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int y, x;
    cout << "Введите x = ";
    cin >> x;
    cout << "Введите y = ";
    cin >> y;

    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }

    cout << "НОД = " << x;

    return 0;
}