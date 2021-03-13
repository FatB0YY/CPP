#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cmath>
#include <regex>
#include <sstream>
using namespace std;

int FucktorialRec(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * FucktorialRec(n - 1);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите n! = ";
    cin >> n;
    cout << "N! = " << FucktorialRec(n);

    return 0;
}