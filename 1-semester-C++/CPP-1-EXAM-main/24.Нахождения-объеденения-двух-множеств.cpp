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
    int N1;
    cout << "Введите размер 1 массива N1 = ";
    cin >> N1;
    cout << "Вводим N1 : ";
    int *P = new int[N1];
    for (int i = 0; i < N1; i++)
    {
        cin >> P[i];
    }

    int N2;
    cout << "Введите размер 1 массива N2 = ";
    cin >> N2;
    cout << "Вводим N2 : ";
    int *K = new int[N2];
    for (int i = 0; i < N2; i++)
    {
        cin >> K[i];
    }

    int *C = new int[N1 + N2];

    int i = 0, j = 0, n = 0;
    while ((i < N1) && (j < N2))
    {
        if (P[i] < K[j])
            C[n++] = P[i++];
        else if (K[j] < P[i])
            C[n++] = K[j++];
        else
        {
            C[n++] = P[i++];
            ++j;
        }
    }

    while (i < N1)
        C[n++] = P[i++];
    while (j < N2)
        C[n++] = K[j++];

    //вывод
    for (i = 0; i < n; ++i)
        std::cout << C[i] << ' ';
    std::cin.get();

    delete[] K;
    delete[] P;
    delete[] C;

    getch();
    return 0;
}
