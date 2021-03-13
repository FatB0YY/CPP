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
    cout << "Введите n (матрица n*n) = ";
    cin >> n;

    //создание 1 матрицы
    int **Matrix = new int *[n];
    for (int i = 0; i < n; i++)
        Matrix[i] = new int[n];
    cout << "Ввод первой матрицы :";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> Matrix[i][j];

    //создание 2 матрицы
    int **Matrix2 = new int *[n];
    for (int i = 0; i < n; i++)
        Matrix2[i] = new int[n];
    cout << "Ввод второй матрицы :";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> Matrix2[i][j];

    //создание pr матрицы
    int **Matrix_pr = new int *[n];
    for (int i = 0; i < n; i++)
        Matrix_pr[i] = new int[n];

    //логика
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            Matrix_pr[i][j] = 0;
            for (int k = 0; k < n; k++)
                Matrix_pr[i][j] += Matrix[i][k] * Matrix2[k][j];
        }

    //вывод
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << Matrix_pr[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < n; i++)
        delete[] Matrix[i];
    for (int i = 0; i < n; i++)
        delete[] Matrix2[i];
    for (int i = 0; i < n; i++)
        delete[] Matrix_pr[i];

    delete[] Matrix;
    delete[] Matrix2;
    delete[] Matrix_pr;
    getch();
    return 0;
}