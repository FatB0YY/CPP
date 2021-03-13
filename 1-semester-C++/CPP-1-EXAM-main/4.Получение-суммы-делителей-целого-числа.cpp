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

    int n;
    cout << "Введите число n = ";
    cin >> n;

    if (n == 1)
        cout << 1;
    else if (n == 0)
        cout << 0;
    else {
        int sum = 1 + n;
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        cout << "Сумма = " << sum;
    }
    return 0;
}