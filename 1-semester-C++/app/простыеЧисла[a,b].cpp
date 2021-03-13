#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
#include <cmath>
using namespace std;



bool prost(int f) {
    int k = 0;
    for (int i = 2; i <= sqrt(f); i++)
        if (f % i == 0) k++;
    return k == 0;
}



int main() {
    setlocale(LC_ALL, "Russian");

    int a;
    int b;
    int j;
    bool NUM = true;

    cout << "Введите число a : ";
    cin >> a;
    cout << "Введите число b : ";
    cin >> b;

    if (a <= b) {
        for (j = min(a, b); j <= max(a, b); j++) {
            if (prost(j)) cout << j << " ";   
        }
    }
    else {
        cout << "Число a > b";
    }

    return 0;
}

//дз на 03:10:20