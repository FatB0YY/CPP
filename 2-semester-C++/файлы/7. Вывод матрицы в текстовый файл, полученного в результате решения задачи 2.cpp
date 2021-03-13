#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;




// ���� ������ ��� ����� �� �����, ����� ��� ��������� �����
// �� ������� � ����� � ���� �� ����������  ����� ������� �����  � ��������� �� � ����������




int main() {
    //������� ����
    setlocale(LC_ALL, "Russian");
    //����� ����� ������� ��������
    srand(time(NULL));

    string path = "test.txt";
    ifstream fin;
    fin.open(path);

    if (!fin.is_open()) {
        cout << "error" << endl;
        return -1;
    }
    else {
        cout << "���� ������" << endl;

        int n;
        fin >> n;
        cout << "����� = " << n << endl;



        int m;
        fin >> m;
        cout << "�������� = " << m << endl;




        int** mat = new int* [n * m];
        for (int i = 0; i < n; i++)
        {
            mat[i] = new int[m];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                fin >> mat[i][j];
            }
        }



        cout << "�������: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j] << "  ";
            }
            cout << endl;
        }

        fin.close();
        for (int i = 0; i < n; i++)
        {
            delete[] mat[i];
        }
        delete[] mat;
    }
    return 0;
}


