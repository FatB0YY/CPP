#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
#include <cmath>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    int m, n, r, fn = 1, fm = 1, fr = 1;

    cout << "Введите n = ";
    cin >> n;
    cout << "Введите m = ";
    cin >> m;

    for (int i=1; i <= n; i++) {
        fn *= i;
    }

    for (int j=1; j<= m; j++) {
        fm *= j;
    }

    r = n - m;

    for (int l=1; l <= r; l++) {
        fr *= l;
    }

    cout << fn/(fm*fr);
}
