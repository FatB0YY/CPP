#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;




// если убрать все слова из файла, тогда все считается верно
// со словами в файле у меня не получилось  верно считать цифры  и присвоить их в переменную




int main() {
    //руссикй язык
    setlocale(LC_ALL, "Russian");
    //чтобы числа рандома менялись
    srand(time(NULL));

    string path = "test.txt";
    ifstream fin;
    fin.open(path);

    if (!fin.is_open()) {
        cout << "error" << endl;
        return -1;
    }
    else {
        cout << "файл открыт" << endl;

        int n;
        fin >> n;
        cout << "Строк = " << n << endl;



        int m;
        fin >> m;
        cout << "Столбцов = " << m << endl;




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



        cout << "Матрица: " << endl;
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


