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
    int max = 0;
    int sum = 0;
    int row = 0;
    int col = 0;
    for (int i = 0; i < M; i++)
    {
        sum = 0;
        for (int j = 0; j < M; j++)
        {
            sum += mat[i][j];
        }
        if (sum >= max)
        {
            max = sum;
            row = i;
        }
    }
    //Ищем столбец с минимальной суммой элементов
    for (int j = 0; j < M; j++)
    {
        sum = 0;
        for (int i = 0; i < M; i++)
        {
            sum += mat[i][j];
        }
        if (sum >= max)
        {
            max = sum;
            col = j;
        }
    }
    cout << "а):" << endl;
    cout << "Номер строки с максимальной суммой элементов: " << ++row << endl;
    cout << "б):" << endl;
    cout << "Номер столбца с минимальной суммой элементов: " << ++col << endl;

    for (int i = 0; i < M; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;
    getch();
    return 0;
}
