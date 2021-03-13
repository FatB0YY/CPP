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
    cout << "Введите размер массива (n >= 2) n = ";
    cin >> n;

    if (n >= 2)
    {

        int *arr = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    else
    {
        cout << "n < 2";
    }


    delete[] arr;
    getch();
    return 0;
}