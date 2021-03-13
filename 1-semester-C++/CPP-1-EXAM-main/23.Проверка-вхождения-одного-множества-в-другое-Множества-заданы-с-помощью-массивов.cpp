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
    cout << "Введите размер 1 массива = ";
    cin >> n;

    int *arrA = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }

    cout << "Введите размер 2 массива = ";
    int m;
    cin >> m;
    int *arrB = new int[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arrB[i];
    }

    int c[9999];
    int z;
    if (n > m)
    {
        z = n;
    }
    else
    {
        z = m;
    }
    bool flag;
    for (int j = 0, k = 0; j < z; j++)
    {
        for (int i = 0; i < z; i++)
            if (arrA[j] == arrB[i])
            {
                flag = true;
                for (int l = 0; l < k; l++)
                {
                    if (c[l] == arrA[j])
                    {
                        flag = false;
                    }
                }
                if (flag == true)
                {
                    cout << "true";
                }
            }
    }
    delete[] arrA;
    delete[] arrB;

    getch();
    return 0;
}