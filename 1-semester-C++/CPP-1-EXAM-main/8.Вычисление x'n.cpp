#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cmath>
#include <regex>
#include <sstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int n, x;
    cout << "Введите n = ";
    cin >> n;
    cout << "Введите x = ";
    cin >> x;
    cout << "n'x = " << pow(n, x);

    return 0;
}