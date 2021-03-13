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
    int i;
    int j;
    int count = 0; // счётчик совпадений

    for (i = 0; i < n; i++) // заполняем случайными числами
        cin >> arr[i];

    for (i = 0; i < n; i++) // выводм массив на экран
        cout << arr[i] << " ";
    cout << endl;

    for (i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        if (arr[i] == arr[j]) // если элементы равны увеличиваем счётчик
            count++;
    }

    if (count == n / 2) // если счётчик равен размеру делённому на 2 , значит массив симметричен
        cout << "YES" << endl;
    else
        cout << "NO" << endl; // иначе нет

    delete[] arr;
    getch();
    return 0;
}