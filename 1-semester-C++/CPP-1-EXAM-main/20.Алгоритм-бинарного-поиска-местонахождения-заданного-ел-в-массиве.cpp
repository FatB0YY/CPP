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

    //бинарный поиск
    int n;
    cout << "n = ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    //значение для поиска
    int k;
    cout << "k = ";
    cin >> k;
    //переменные для определения невычеркнутого куска массива
    int left = 0;
    int right = n - 1;
    //Пока имеется кусок массива с нерассмотренными элементами
    while (left != right)
    {
        //Поиск элемента в середине куска массива
        int m = (left + right) / 2;
        // Этот элемент может быть искомым
        if (arr[m] == k)
        {
            left = right = m;
            break;
        }
        //выбираем ту половину куска, в которой может находиться элемент
        if (arr[m] > k)
            //сдвиг правой границы
            right = m;
        else
            //сдвиг левой границы куска
            left = m + 1;
    }
    if (arr[left] == k)
        cout << left;
    else
        cout << "искомого элемента нет";

    delete[] arr;
    getch();
    return 0;
}