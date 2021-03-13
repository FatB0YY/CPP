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
    int M;

    cout << "Введите M: ";
    cin >> M;

    //выделение памяти и ввод матрицы
    cout << "Ввод матрицы : " << endl;
    int **mat = new int *[M];
    for (int i = 0; i < M; i++)
    {
        mat[i] = new int[M];
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> mat[i][j];
        }
        cout << endl;
    }
    // вывод нашей матрицы
    cout << "Матрица: " << endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }
    // логика
    //Ищем строку с максимальной суммой элементов

    int i = 0;
    int j = 0;
    bool null = false;
    while (i < M && null == false)
    {
        if (mat[i][j] == 0 && j < M)
            j++;
        else if (j == M)
        {
            null = true;
        }
        else
        {
            i++;
            j = 0;
        }
    }

    if (null == true)
        cout << "yes";
    else
        cout << "no";

    for (int i = 0; i < M; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;
    getch();
    return 0;
}

//пока только строку может искать