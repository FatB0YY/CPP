#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int** memoryMat(int** mat, int n, int m) {
    for (int i = 0; i < n; i++)
    {
        mat[i] = new int[m];
    }
    return mat;
}

int** inputMat(int** mat, int n, int m) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mat[i][j] = 1 + rand() % 9;
        }
    }
    return mat;
}

int** printMat(int** mat, int n, int m) {
    cout << "Матрица: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }
    return mat;
}

int** fileAddMat(int** mat, int n, int m) {
    string filePath = "test.txt";
    ofstream out(filePath);

    out << "Строк = ";
    out << n << endl;

    out << "Столбцов = ";
    out << m << endl;

    out << "Матрица:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            out << mat[i][j] << "    ";
        }
        out << endl;
    }
    out.close();
    return mat;
}

int** deleteMat(int** mat, int n) {
    for (int i = 0; i < n; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;
    return 0;
}




int main()
{
    //руссикй язык
    setlocale(LC_ALL, "Russian");
    //чтобы числа рандома менялись
    srand(time(NULL));

    //кол строк
    int n = 2 + rand() % 4;

    //кол столбцов
    int m = 2 + rand() % 4;

    cout << "Строк = " << n << endl;
    cout << "Столбцов = " << m << endl;

    //выделение памяти
    int** mat = new int* [n * m];
    memoryMat(mat, n, m);

    //ввод прямоуг матрицы
    inputMat(mat, n, m);

    // вывод нашей матрицы
    printMat(mat, n, m);

    //логика
    fileAddMat(mat, n, m);

    //удаление памяти
    deleteMat(mat, n);
}