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

    //кол строк
    int n; cout << "Введите кол строк n = "; cin >> n;
    //кол столбцов
    int m; cout << "Введите кол столбцов m = "; cin >> m;

    //выделение памяти
    int** mat = new int* [n];
    for (int i = 0; i < n; i++)
    {
        mat[i] = new int[m];
    }


    //ввод прямоуг матрицы
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "mat[" << i << "][" << j << "] = ";
            cin >> mat[i][j];
        }
        cout << endl;
    }

    // вывод нашей матрицы
    cout << "Матрица: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }

    //логика


    //удаление памяти
    for (int i = 0; i < n; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;


    return 0;
}
