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
    int temp;
    for (int i = 0; i < M; i++)
        for (int j = i + 1; j < M; j++)
        {
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    // вывод
    cout << "Матрица новая: " << endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < M; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;
    getch();
    return 0;
}