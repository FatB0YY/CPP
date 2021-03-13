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

    int n, i;
    bool NUM = true;

    cout << "Введите число для проверки : ";
    cin >> n;

    for (i = 2; i <= (sqrt(abs(n))); i++)
    {
        if (n % i == 0)
        {
            NUM = false;
            break;
        }
    }

    if (NUM)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Composite" << endl;
    }

    return 0;
}