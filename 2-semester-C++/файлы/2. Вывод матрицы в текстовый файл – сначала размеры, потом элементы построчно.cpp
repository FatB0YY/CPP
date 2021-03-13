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
    cout << "�������: " << endl;
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

    out << "����� = ";
    out << n << endl;

    out << "�������� = ";
    out << m << endl;

    out << "�������:" << endl;
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
    //������� ����
    setlocale(LC_ALL, "Russian");
    //����� ����� ������� ��������
    srand(time(NULL));

    //��� �����
    int n = 2 + rand() % 4;

    //��� ��������
    int m = 2 + rand() % 4;

    cout << "����� = " << n << endl;
    cout << "�������� = " << m << endl;

    //��������� ������
    int** mat = new int* [n * m];
    memoryMat(mat, n, m);

    //���� ������� �������
    inputMat(mat, n, m);

    // ����� ����� �������
    printMat(mat, n, m);

    //������
    fileAddMat(mat, n, m);

    //�������� ������
    deleteMat(mat, n);
}