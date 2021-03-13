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

    int n;
    cout << "Введите размер 1 массива = ";
    cin >> n;
    cout << "Вводим 1 массив : " << endl;
    int* arrA = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }

    cout << "Введите размер 2 массива = ";
    int m;
    cin >> m;
    cout << "Вводим 2 массив : " << endl;
    int* arrB = new int[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arrB[i];
    }


    int* c = new int[n + m];
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
    cout << "Пересечение : " << endl;
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
                if (flag)
                {
                    cout << arrA[j] << '\n';
                    c[k++] = arrA[j];
                }
            }
    }
    delete[] arrA;
    delete[] arrB;
    return 0;
}