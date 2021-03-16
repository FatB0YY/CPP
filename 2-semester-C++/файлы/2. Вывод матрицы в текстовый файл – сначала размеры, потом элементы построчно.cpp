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
    cout << "Ìàòðèöà: " << endl;
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

    out << "Ñòðîê = ";
    out << n << endl;

    out << "Ñòîëáöîâ = ";
    out << m << endl;

    out << "Ìàòðèöà:" << endl;
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
    //ðóññèêé ÿçûê
    setlocale(LC_ALL, "Russian");
    //÷òîáû ÷èñëà ðàíäîìà ìåíÿëèñü
    srand(time(NULL));

    //êîë ñòðîê
    int n = 2 + rand() % 4;

    //êîë ñòîëáöîâ
    int m = 2 + rand() % 4;

    cout << "Ñòðîê = " << n << endl;
    cout << "Ñòîëáöîâ = " << m << endl;

    //âûäåëåíèå ïàìÿòè
    int** mat = new int* [n];
    memoryMat(mat, n, m);

    //ââîä ïðÿìîóã ìàòðèöû
    inputMat(mat, n, m);

    // âûâîä íàøåé ìàòðèöû
    printMat(mat, n, m);

    //ëîãèêà
    fileAddMat(mat, n, m);

    //óäàëåíèå ïàìÿòè
    deleteMat(mat, n);
}
