#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    bool F = true;
    int n;
    cout << "Введите размер массива (n >= 2) n = ";
    cin >> n;

    

    if (n >= 2) {
        
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n-1; i++) {
            if (arr[i] > arr[i+1]) {
                F = false;
                break;
            }
        }

        if (F == true) {
            cout << "Все норм";
        }
        else {
            
            cout << "Все не норм";
        }
    }
    else {
        cout << "n < 2";
    }

    return 0;
}
// дз на 03:10:20