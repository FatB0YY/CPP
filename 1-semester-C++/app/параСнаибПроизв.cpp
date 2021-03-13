#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int t;
    int i;
    int n;
    cout << "Введите размер массива (n >= 2) n = ";
    cin >> n;


    if (n >= 2) {

        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int max = arr[0] * arr[1];

        

        for (int i = 1; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] * arr[j] > max) {
                    max = arr[i] * arr[j];
                }
            }
        }
        cout << max;
       
    }
    else {
        cout << "n < 2";
    }


    return 0;
}
//дз на 03:10:20