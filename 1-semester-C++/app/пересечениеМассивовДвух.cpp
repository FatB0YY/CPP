#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");


    int n;
    cout << "Введите размер 1 массива = ";
    cin >> n;


    int* arrA = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arrA[i];
    }

    cout << "Введите размер 2 массива = ";
    cin >> n;

    int* arrB = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arrB[i];
    }


    int c[7];
    bool flag;
    for (int j = 0, k = 0; j < 7; j++)
    {
        for (int i = 0; i < 4; i++)
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



    return 0;
}
// дз на 03:10:20