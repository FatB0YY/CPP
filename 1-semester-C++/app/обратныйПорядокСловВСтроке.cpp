#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    int e;
    cout << "Введите e = ";
    cin >> e;

    int *arr = new int[e];
    

    for (int i = 0; i < e; i++) {
        cin >> arr[i];
    }

    
    int *arr2 = new int[e];

    for (int i = 0; i < e; i++) {
        arr2[i] = arr[i];
    }
    

   
    for (int i = e - 1; i >= 0; i--) {
        cout << arr2[i];
    }

    delete[] arr;
    delete[] arr2;
    return 0;
}

//дз на 19:09:20