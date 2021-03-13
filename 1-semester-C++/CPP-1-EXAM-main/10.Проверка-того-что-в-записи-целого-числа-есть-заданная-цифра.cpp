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
    int n, k, p;
    cout << "Введите число n = ";
    cin >> n;
    cout << "Введите число k = ";
    cin >> k;
    p = 0;

    while (n > 0)
    {
        p++;
        if (n % 10 == k)
        {
            cout << "Yes" << endl;
            break;
        }
        else
        {
            p--;
            n /= 10;
        }
    }
    if (p == 0)
    {
        cout << "NO" << endl;
    }

    return 0;
}