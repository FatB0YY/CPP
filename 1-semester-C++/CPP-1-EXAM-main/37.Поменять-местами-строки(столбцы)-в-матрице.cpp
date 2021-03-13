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
    int n1, n2, ch;
    cout << "Введите  столбцы поменять местами : ";
    cin >> n1 >> n2;

        // вывод новой матрицы
    cout << "Матрица новая: " << endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }
    // очистка памяти
    for (int i = 0; i < M; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;
    getch();
    return 0;
}

//пока только столб может искать