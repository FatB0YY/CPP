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
    cout << "Введите n = ";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max1 = arr[0];
    int max2 = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1 && arr[i] > max2)
        {
            max1 = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < max1 && arr[i] > max2)
        {
            max2 = arr[i];
        }
    }

    cout << "max1 = " << max1 << endl;
    cout << "max2 = " << max2 << endl;
    delete[] arr;
    getch();
    return 0;
}