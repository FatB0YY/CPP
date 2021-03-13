#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include <regex>
#include <sstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите число n = ";
    cin >> n;
    int max = 0;
    int num;
    cout << "Вводим " << n << " элементов:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num > max)
        {
            max = num;
        }
    }
    cout << "max = " << max << endl;

    getch();
    return 0;
}