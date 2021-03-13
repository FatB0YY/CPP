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

    bool F = true;
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

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                F = false;
                break;
            }
        }

        if (F == true)
        {
            cout << "YES";
        }
        else
        {

            cout << "NO";
        }
        delete[] arr;
    }
    else
    {
        cout << "n < 2";
    }
    getch();
    return 0;
}