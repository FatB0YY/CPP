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
    cout << endl;
    cout << "Введите число n = ";
    cin >> n;
    int num;
    int pr = 1;
    cout << "Вводим " << n << " элементов:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        pr *= num;
    }
    cout << "PR = " << pr << endl;

    getch();
    return 0;
}