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
    setlocale(LC_CTYPE, "Russian");

    int n;
    cout << "Введите n (матрица n*n) = ";
    cin >> n;

    int **Matrix = new int *[n];
    for (int i = 0; i < n; i++)
        Matrix[i] = new int[n];
    cout << "Ввод первой матрицы :";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> Matrix[i][j];

    int **Matrix2 = new int *[n];
    for (int i = 0; i < n; i++)
        Matrix2[i] = new int[n];
    cout << "Ввод второй матрицы :";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> Matrix2[i][j];

    int **Matrix_sum = new int *[n];
    for (int i = 0; i < n; i++)
        Matrix_sum[i] = new int[n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            Matrix_sum[i][j] = Matrix[i][j] + Matrix2[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << Matrix_sum[i][j] << " ";
        cout << endl;
    }
    delete[] Matrix;
    delete[] Matrix2;
    delete[] Matrix_sum;

    getch();
    return 0;
}